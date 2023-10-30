t1: t1.o
    ld -macosx_version_min 11.0.0 -o t1 t1.o -lSystem -syslibroot `xcrun -sdk macosx --show-sdk-path` -e _start -arch arm64 

t1.o: t1.s
	as -o t1.o t1.s