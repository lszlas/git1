#Zadanie 1#
grep "[:alnum:]{1,}" plik.txt
#Zadanie 2# ^-oznacza rozpoczynajace wiersze []szukane lit/cyfrty
grep ^[0-9] pl*
#Zadanie 3 l-znajduje pliki#
grep -l "r\{9\}" *
#Zadanie 4#
grep -c bash$ /etc/passwd

#Zadanie 5#

egrep -i \\b[IVXLCDM]+\\b plik.txt
