echo "testing"
FILE=Build
nano CMakeLists.txt
if [ -d "$FILE" ]; then 
    
    echo "build exists"
    rm -rf Build
fi

    mkdir Build
    cd Build
    cmake ..
    make
