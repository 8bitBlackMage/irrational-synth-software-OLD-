echo "testing"
FILE=Build
echo $1
nano CMakeLists.txt
if [ -d "$FILE" ]; then 
    
    echo "build exists"
    echo "cleaning directories"
    rm -rf Build
fi

    mkdir Build
    cd Build

    cmake .. 
    make
