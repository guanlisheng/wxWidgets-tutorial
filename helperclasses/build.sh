
for i in `ls *.cpp`
do 
    g++ $i `wx-config --cxxflags --libs` -o `basename $i .cpp` 
done
