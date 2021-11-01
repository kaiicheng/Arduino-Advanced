#include <IRremote.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

int IRrecvice = 7;
IRrecv irrecv(IRrecvice);
decode_results results;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  irrecv.enableIRIn();
  Serial.println("坐到遙控器? 起來!");
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (irrecv.decode(&results))
  {
    Serial.println(results.value);
    irrecv.resume();
  }
}
