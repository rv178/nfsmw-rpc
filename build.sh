rm -rf build
rm -rf dist

mkdir build
mkdir build/scripts

cp ./lib/discord-rpc.dll ./build/

i686-w64-mingw32-g++ -static-libgcc -static-libstdc++ -mthreads -I src/ -I include/ -L lib/ -l discord-rpc -shared -o build/scripts/nfsmw-rpc.asi src/discord_rpc.cpp

echo "Built successfully"

