#!/bin/bash
git="https://github.com/wujekstaszek/pn_Jadro.git"
skrypt=

if [ $1 == "clone" ];
then
	git clone $git
fi
if [ $1 == "run" ];
then
{
	echo "Wystarczy wam dowolna dystrybucja linuxa oraz kompilator c++"
	echo "Polecenia znajdują się w pliku manager.cpp"
	echo "Pomoce znajdują się w pliku Pomoce.tx"
}
fi
if [ $1 == "clean" ];
then
	rm -r pn_Jadro/
fi
solution="https://aleksanderMorgalaViewer:a9Piwyk7XXxdmDs@github.com/wujekstaszek/pn_jadro_solution.git"
if [ $1 == "solution" ];
then
{
	git clone $solution
	g++ pn_jadro_solution/projekt.cpp -o pn_jadro_solution/projekt.exe
	cat pn_jadro_solution/przyklad.txt
	echo "Wynik rzeczywisty:"
	echo""
	./pn_jadro_solution/projekt.exe
	echo""
	./pn_jadro_solution/projekt.exe -fork
}
fi
if [ $1 == "update"]; then
	echo "Aktualizacja skryptu"
	git clone $solution temporary_directory
	mv temporary_directory/run_morgala_aleksander.sh .
	rm -fr temporary_directory

