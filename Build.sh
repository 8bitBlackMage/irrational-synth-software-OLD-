echo "testing"
FILE=Build
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
