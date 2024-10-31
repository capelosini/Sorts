echo "Building BubbleSort..."
gcc bubble.c arrayOperations.c -o bubble
echo "Builded!"

echo "Building InsertionSort..."
gcc insertion.c arrayOperations.c -o insertion
echo "Builded!"

echo "Building MergeSort..."
gcc merge.c arrayOperations.c -o merge
echo "Builded!"

echo "Building QuickSort..."
gcc quick.c arrayOperations.c -o quick
echo "Builded!"

# Joke algorithms
#
# echo "Building BogoSort..."
# gcc bogo.c arrayOperations.c -o bogo
# echo "Builded!"
#
# echo "Building StalinSort..."
# gcc stalin.c arrayOperations.c -o stalin
# echo "Builded!"

echo "__BubbleSort__"
./bubble
echo "__InsertionSort__"
./insertion
echo "__MergeSort__"
./merge
echo "__QuickSort__"
./quick
