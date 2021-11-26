echo 100000
echo 100000
for i in {1..100000}
do
   echo $(($RANDOM * $RANDOM % 100001))
done
