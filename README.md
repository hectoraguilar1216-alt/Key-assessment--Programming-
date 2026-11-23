# Corozal Clinic Appointment Queue Management System

An offline C++ console application designed to streamline patient intake and waiting-room management at the **Corozal Clinic** in Corozal District, Belize. It replaces handwritten sign-in sheets with automated ticket numbering, separate emergency triage tracking, queue cancellation, live status summaries, and daily resets.

## Features
* **Patient Registration (1):** Assigns sequential waiting tickets (`A101`–`A120`) for normal visits or logs immediate emergency bypasses without occupying standard waiting slots.
* **Call Next Patient (2):** Calls the patient at the front of the queue and automatically shifts remaining patients forward.
* **Cancel Ticket (3):** Removes a cancelled ticket ID from the active waiting list and updates the waiting count.
* **View Queue Summary (4):** Displays total waiting patients, total emergency cases, and all active ticket numbers with patient names.
* **Exit System (5):** Exits the console session cleanly.
* **Reset for New Day (6):** Clears all waiting slots and resets counters back to `A101` for the next clinic day.

## Project Structure
* `main.cpp` – Controls the main menu loop and routes user selections.
* `functions.h` / `functions.cpp` – Displays menu options and reads the user's choice.
* `queue.h` / `queue.cpp` – Defines and implements the encapsulated `clinic` class (`std::array` storage, ticket generation, queue shifting, cancellation, and summary display).

## How to Compile and Run

1. Open a terminal in the project folder.
2. Compile all source files together:
   ```bash
   g++ main.cpp functions.cpp queue.cpp -o clinic_queue