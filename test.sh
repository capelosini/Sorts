echo "Building BubbleSort..."
gcc bubble.c arrayOperations.c -o bubble
echo "Builded!"

echo "Building InsertionSort..."
gcc insertion.c arrayOperations.c -o insertion
echo "Builded!"

echo "__BubbleSort__"
./bubble
echo "__InsertionSort__"
./insertion
