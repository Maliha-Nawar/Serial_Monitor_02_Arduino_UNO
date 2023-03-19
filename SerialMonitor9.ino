        //9
        //Name: Maliha Nawar; ID: 17.01.05.131
void setup() {
Serial.begin(9600);//initializing serial monitor
}
void loop() {

int max1;int max2;int max3;int largest;
int a[10]={3,1,7,55,88,23,43,98,32,19};
max1=(a[0]>a[1]?(a[0]>a[2]?a[0]:a[1]):(a[1]>a[2]?a[1]:a[2]));//finding largest value among a[0],a[1],a[2]
max2=(a[3]>a[4]?(a[3]>a[5]?a[3]:a[5]):(a[4]>a[5]?a[4]:a[5]));//finding largest value among a[3],a[4],a[5]
max3=(a[6]>a[7]?(a[6]>a[8]?a[6]:a[8]):(a[7]>a[8]?a[7]:a[8]));//finding largest value among a[6],a[7],a[8]
largest=(max3>a[9]?max3:a[9]);                               //finding largest value between a[9],max3
Serial.println(largest);delay(1000);}
