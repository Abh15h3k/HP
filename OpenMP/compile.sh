[ "$1" == "clean" ] && rm -rf executables && exit

FILES=$(ls [1-8]*.c)

! [ -d executables ] && mkdir executables

for file in $FILES; do
    bin=$(echo $file | cut -d'.' -f1)
    gcc -fopenmp $file -o executables/$bin
done

cd 9*
x=$(ls | grep Monte)
gcc -fopenmp $x -o ../executables/"9-$(echo $x | cut -d'.' -f1)"
