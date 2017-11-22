byte nums[10][7] = {
    {1,1,1,1,1,1,0}, //0
    {0,1,1,0,0,0,0}, //1
    {1,1,0,1,1,0,1}, //2
    {1,1,1,1,0,0,1}, //3          
    {0,1,1,0,0,1,1}, //4
    {1,0,1,1,0,1,1}, //5
    {1,0,1,1,1,1,1}, //6
    {1,1,1,0,0,0,0}, //7
    {1,1,1,1,1,1,1}, //8
    {1,1,1,1,0,1,1}  //9
};

void setup() {
 for (int i = 2; i <= 8; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i,LOW);
 }
}

void loop() {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 7; j++) {
        digitalWrite(j+2, nums[i][j]);
    }
    delay(1000);
  }
}