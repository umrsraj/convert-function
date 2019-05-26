String Byte = "";
void convert3 (unsigned int val)
{
  unsigned int a,b,c,d,e,f,g,h;
  a = val/10000;
  b = val%10000;
  c = b/1000;
  d = b%1000;
  e = d/100;
  f = d%100;
  g = f/10;
  h = f%10;

a = a|0X30;
c = c|0X30;
e = e|0X30;
g = g|0X30;
h = h|0X30;

 // Serial.write(a);
  //Serial.write(c);
  Serial.write(e);
  Serial.write(g);
  Serial.write(h);
}
int t1 = 10;
int t2 = 10;
int t3 = 10;
int t4 = 10;
int t5 = 10;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.write('*');
convert3 (t1);
convert3 (t2);
convert3 (t3);
convert3 (t4);
convert3 (t5);

}

void loop() {
  // put your main code here, to run repeatedly:

//  if (Serial.available() > 0) {
//                // read the incoming byte:
//                Byte = Serial.read();
//                if (Byte.indexOf('Y')){



}
