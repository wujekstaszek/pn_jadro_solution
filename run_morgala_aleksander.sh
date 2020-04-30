#!/bin/bash
git="https://github.com/wujekstaszek/pn_Jadro.git"
skrypt="https://raw.githubusercontent.com/wujekstaszek/pn_jadro_solution/master/run_morgala_aleksander.sh?token=AETFNZKSV3YOPGTU6EJUM2S6WPS7C"

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
	curl -s $skrypt > run_morgala_aleksander.sh

