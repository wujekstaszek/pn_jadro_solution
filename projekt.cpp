#include <iostream>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <fstream>

bool isdigit(char x)
{
	if(x>'0' && x<'9')
		return 1;
	return 0;
}


void close(char* pid)
{
	int intPid=std::atoi(pid);
	if(intPid==0)
		std::cout<<"Wprowadź poprawny numer PID";
	else{
		kill(intPid,SIGTERM);
	}
}


void makeFork()
{
	if(fork()==0){
		std::cout<<"PID rodzica:"<<getppid()<<std::endl;
		std::cout<<"PID kopii:"<<getpid()<<std::endl;
	}
	else
	std::cout<<"PID głównego programu"<<getpid()<<std::endl;
}

void show()
{
	struct dirent *file;
	DIR *dp;
	dp=opendir("/proc");
	int i=0;
		std::cout<<"PID/NAME/PRI/UID"<<std::endl;
	while(file = readdir(dp)){

		i++;
		if(isdigit(file->d_name[0])){
			std::string pid=file->d_name;
			std::ifstream stat;
			stat.open("/proc/"+pid+"/stat");
			std::string userid;
			std::string nazwa;
			stat>>nazwa;
			stat>>nazwa;
			for(int i=0;i<5;i++)
				stat>>userid;


			std::cout<<pid<<" "<<nazwa<<" "<<getpriority(PRIO_PROCESS,stoi(pid))<<" "<<userid<<std::endl;
			stat.close();


		}
	}

}

int main(int argc,char** argv)
{
	if(argc>1){
		if(0==std::string("-close").compare(argv[1]))
			close(argv[2]);
		else if((0==std::string("-fork").compare(argv[1])))
			makeFork();
		else
			std::cout<<"Nie rozpoznano polecenia, przykro mi"<<std::endl;

	}
	else
		show();


}