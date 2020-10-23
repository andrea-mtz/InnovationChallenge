

//digital pins out

const int leftfMotor1 = 2;
const int leftbMotor1 = 3;

const int leftfMotor2 = 4;
const int leftbMotor2 = 5;

const int leftfMotor3 = 6;
const int leftbMotor3 = 7;

const int leftfMotor4 = 8;
const int leftbMotor4 = 9;

//motors

void setup()
{
   pinMode(leftfMotor1, OUTPUT);
  pinMode(leftbMotor1, OUTPUT);
  
  pinMode(leftfMotor2, OUTPUT);
  pinMode(leftbMotor2, OUTPUT);
  
  pinMode(leftfMotor3, OUTPUT);
  pinMode(leftbMotor3, OUTPUT);
  
  pinMode(leftfMotor4, OUTPUT);
  pinMode(leftbMotor4, OUTPUT);
}


void loop() //run forward
{
  
  digitalWrite(leftfMotor1, HIGH);
  digitalWrite(leftbMotor1, LOW);

  digitalWrite(leftfMotor2, HIGH);
  digitalWrite(leftbMotor2, LOW);
  
  digitalWrite(leftfMotor3, HIGH);
  digitalWrite(leftbMotor3, LOW);
  
  digitalWrite(leftfMotor4, HIGH);
  digitalWrite(leftbMotor4, LOW);
  
}
      
  