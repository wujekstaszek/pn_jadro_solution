/*
Napisanie programu wyświetlającego podstawowe informację (PID, opis/nazwa procesu) na temat każdego z procesów
w systemie i umożliwiającego "zabicie" i forkowanie procesów.
W ramach przyśpieszenia pracy zostanie udostępniona dokumentacja dot. odpowiednich systemcallów.

Napisany program powinien:
- Przy braku argumentu wyświetlić wszystkie procesy działające w systemie.(./a.out)
Dla każdego procesu powinno zostać wypisane: 
UserID,
ProcessID,
Priorytet(nice),
nazwa
 
- Po podaniu parametru -fork utworzyć kopię programu i wypisać swój PID(./a.out -fork) - kopia powinna wypisać swój pid oraz pid swojego rodzica.

- Po podaniu parametru -close <PID> zamknąć "łagodnie" program o podanym PID(./a.out -close 10).*/










int main(int argc,char** argv)
{}



/* Przykładowy wynik:
./a.out -fork
PID głównego programu 395
PID rodzica: 395
PID kopii:396                                                                                                           
./a.out                           
PID/NAME/PRI/UID                                                                                                        
1 (init) 0 0                                                                                                            
79 (init) 0 1025                                                                                                        
80 (bash) 0 1025                                                                                                        
387 (bash) 10 1025                                                                                                      
397 (a.out) 10 1025                                                                                                     
./a.out -close 387                
Killed                                                                                                                
./a.out                           
PID/NAME/PRI/UID                                                                                                        
1 (init) 0 0                                                                                                            
79 (init) 0 1025                                                                                                        
80 (bash) 0 1025                                                                                                        
399 (a.out) 0 1025 






*/