# LED-brightness-control-using-potentiometer
Use a potentiometer to control brightness of LED on Arduino

Components used:
- potentiometer
- LED
- 220 Ohm resistor
- 5 jumper wires

Wiring:

## Circuit Connections

- **Potentiometer:**
  - Outer pins go to **5V** and **GND**
  - Middle pin goes to **A3**

- **LED:**
  - Long leg (+) goes to **Pin 11** (with a 220Ω resistor in between)
  - Short leg (-) goes to **GND**

**Circuit Schematic**


<img width="611" height="465" alt="image" src="https://github.com/user-attachments/assets/bfd381b3-0a52-4dfe-94c0-b0771bdfba47" />


### Challenges & Fixes
* **Issue:** The LED hit full brightness way too early when turning the knob.
* **Why:** `analogRead()` goes from `0–1023`, while `analogWrite()` only goes from `0–255`.
* **Fix:** Used `map(val, 0, 1023, 0, 255)` to scale the values properly.
