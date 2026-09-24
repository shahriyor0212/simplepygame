const int BTN_LEFT = 3;
const int BTN_RIGHT = 2;

void setup() {
  Serial.begin(115200);
  pinMode(BTN_LEFT, INPUT_PULLUP);
  pinMode(BTN_RIGHT, INPUT_PULLUP);
}

void loop() {
  // Read state (LOW = pressed due to INPUT_PULLUP)
  int leftState = digitalRead(BTN_LEFT) == LOW ? 1 : 0;
  int rightState = digitalRead(BTN_RIGHT) == LOW ? 1 : 0;

  // Send formatted string: "1,0\n"
  Serial.print(leftState);
  Serial.print(",");
  Serial.println(rightState);

  delay(10);
}