
## Requirements

- **Microcontroller**: PIC16F877A or any compatible 8-bit MCU
- **Compiler**: MPLAB XC8 (or similar)
- **Debugger/Programmer**: PICkit or equivalent
- **Hardware**:
  - SSD (Seven-Segment Display)
  - Push-buttons (Switches)
  - EEPROM (internal or external, depending on the MCU)

## Setup and Usage

1. **Build the Project**:
   - Use the provided `Makefile` to build the project.
   - Run `make` in the project directory to generate the hex file.

2. **Flash the Microcontroller**:
   - Use your programmer (e.g., PICkit) to flash the generated hex file to the microcontroller.

3. **Connect the Hardware**:
   - Connect the switches to the input pins configured in the code.
   - Connect the SSD to the output pins configured in the code.

4. **Run the System**:
   - Press **Switch 0** to increment the counter.
   - Press **Switch 1** to save the current counter value to EEPROM.
   - Press **Switch 2** to load the saved counter value from EEPROM.

## Code Highlights

### Main Logic
- Handles switch input using edge triggering.
- Updates the counter value based on the switches.
- Displays the current counter value on the SSD.

### EEPROM Functions
- `eeprom_write(address, data)`: Writes a byte of data to the specified EEPROM address.
- `eeprom_read(address)`: Reads a byte of data from the specified EEPROM address.

### SSD Display
- Displays single and double-digit numbers on a seven-segment display using predefined data masks.

## Example Workflow

1. Initial count starts at `0`.
2. Press **Switch 0**:
   - Counter increments (e.g., `1`, `2`, `3`...).
3. Press **Switch 1**:
   - Counter value is saved to EEPROM.
4. Press **Switch 2**:
   - Counter value is reset to the last saved value in EEPROM.

## Future
