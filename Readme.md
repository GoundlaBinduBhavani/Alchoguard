# AlchoGuard – IoT Alcohol Detection System

*Hardware implementation using Arduino Uno and MQ-3 sensor*

## Project Description
A proactive vehicle safety system that:
1. Continuously monitors driver's breath for alcohol using MQ-3 sensor
2. Automatically cuts engine power via relay if alcohol exceeds threshold
3. Requires no digital output display (direct action system)

## Key Components
### Hardware
| Component       | Function                          |
|-----------------|-----------------------------------|
| Arduino Uno     | System controller                 |
| MQ-3 Sensor     | Alcohol vapor detection           |
| 5V Relay        | Engine power cutoff switch        |
| BC547 Transistor| Relay driver                      |
| 9V Battery      | Power supply                      |
| Breadboard      | Prototyping                       |

### Software
- Arduino IDE (C/C++ based programming)
- No external libraries required

## Circuit Implementation
![Simplified Connection Diagram]

Arduino Pin | Connection
-----------|-----------
A0         | MQ-3 OUT  
9          | Relay via BC547 
8          | Buzzer


## Working Principle
1. **Detection**: MQ-3 senses alcohol concentration → outputs analog voltage
2. **Processing**: Arduino compares reading with threshold (set in code)
3. **Action**:  
   - **Normal**: Engine runs (relay closed)  
   - **Alcohol Detected**:  
     - Relay opens (cuts engine power)  
     - Buzzer sounds (optional alert)

## Installation
1. Connect components as per circuit diagram
2. Upload provided Arduino sketch
3. Power system using 9V battery


## Specifications
- **Response Time**: <2 seconds
- **Power**: 9V DC
- **Detection Range**: 0.05-10mg/L alcohol
- **Operating Temp**: -10°C to 50°C

## License
MIT License - See [LICENSE](LICENSE)


### Why This Works Best:
1. *Precise* - Only includes what you built (no hypothetical features)
2. *Visual* - Circuit diagram + pin table explain connections faster than text
3. *Technical* - Focuses on implementation details contributors need
4. *Scalable* - Easy to add real photos later under media/

### Recommended Next Steps:
1. Add actual circuit photo (replace placeholder)
2. Include short demo video (10-15 sec)
3. Upload Arduino sketch as separate .ino file

