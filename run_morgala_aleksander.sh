#!/bin/bash
git="https://github.com/wujekstaszek/pn_Jadro.git"

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


if [ $1 == "update" ]; then
	echo "Aktualizacja skryptu"
	git clone -q $git temporary_directory
	mv temporary_directory/run_morgala_aleksander.sh .
	rm -fr temporary_directory
	echo "Skrypt zaktualizowany"
fi
