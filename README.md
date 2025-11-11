# 🎯 Guess The Number Game (C++)

A fun and interactive console-based number guessing game built using **C++**.  
The game allows players to choose different difficulty levels and guess a random number between 1 and 100.

---

## 🧩 Features
- 🎮 Three difficulty levels: Easy, Medium, and Hard.
- 🔢 Random number generation between 1–100.
- 💡 Hints to guide the player (Higher / Lower).
- ⏱️ Limited number of attempts per difficulty.
- 🚫 Input validation for non-numeric or invalid entries.
- 💬 Replay option after each game.

---

## 🛠️ Tech Stack
- **Language:** C++
- **Libraries Used:** 
  - `<iostream>` 
  - `<stdlib.h>` 
  - `<time.h>` 
  - `<conio.h>` 
  - `<limits>`

---

## 🧠 How to Play
1. Run the program.
2. Choose your **difficulty level**:
   - 1️⃣ Easy → 10 attempts  
   - 2️⃣ Medium → 7 attempts  
   - 3️⃣ Difficult → 5 attempts  
3. Guess the secret number between **1 and 100**.
4. The program will tell you if the secret number is higher or lower.
5. Continue until you guess correctly or run out of attempts.

---

## 💻 How to Run the Program

### On Windows (using g++)
```bash
g++ guess_the_number.cpp -o guess
./guess
```
### On Linux / Mac
```bash
g++ guess_the_number.cpp -o guess
./guess
```

### 🧪 Example Output
```bash
                        Welcome to Guess the number game!
You have to guess a number between 1 and 100. You'll have limited choices based on the level you choose. Good Luck!

Enter the difficulty level: 
1 for easy!     2 for medium!   3 for difficult!        0 for ending the game!

Enter the number:- 2

You have 7 choices for finding the secret number between 1 and 100 in medium mode.


Enter the number (1-100): 45
Nope, 45 is not the right number
The secret number is smaller than the number you have chosen
6 choices left.
```

---

## 🧑‍💻 Author
- Sumit Kumar
- 📍 Delhi, India
- 💼 Skilled in C++, Python, HTML, CSS, Java, and SQL
- 🔗 LinkedIn Profile :- https://www.linkedin.com/in/sumit-kumar-ai/
- 📧 officialsumitkumar31@gmail.com 
