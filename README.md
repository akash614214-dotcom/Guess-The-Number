# 🎯 Guess The Number Game in C

A simple and interactive **Guess The Number** game developed in **C**. The game offers three difficulty levels, allowing players to test their guessing skills with different number ranges and attempt limits.

## 📌 Features

* 🎮 Three Difficulty Levels

  * 🟢 Easy
  * 🟡 Medium
  * 🔴 Hard
* 🎲 Random number generation
* 🔄 Unlimited replay option
* 💡 Hints after every guess (Too High / Too Low)
* 🖥️ Simple and user-friendly console interface
* ⚡ Fast and lightweight C program

## 🛠️ Technologies Used

* C Programming Language
* Standard C Libraries

  * `stdio.h`
  * `stdlib.h`
  * `time.h`

## 🚀 How It Works

1. Run the program.
2. Choose a difficulty level:

   * **Easy**
   * **Medium**
   * **Hard**
3. Enter your guesses.
4. The program provides hints:

   * Too High
   * Too Low
5. Keep guessing until you find the correct number.
6. Play again if you want another challenge.

## 📂 Project Structure

```
Guess-The-Number/
│── guess_the_number.c
│── README.md
```

## 🎯 Difficulty Levels

| Level     | Description                                 |
| --------- | ------------------------------------------- |
| 🟢 Easy   | Small number range for beginners            |
| 🟡 Medium | Moderate difficulty with a larger range     |
| 🔴 Hard   | Wide number range for an advanced challenge |

## 💡 Learning Outcomes

This project helped in understanding:

* Random number generation using `rand()`
* Using `srand(time(NULL))`
* Conditional statements
* Loops
* User input handling
* Menu-driven programming
* Problem-solving with C

## 📷 Sample Output

```
========== GUESS THE NUMBER ==========
1. Easy
2. Medium
3. Hard

Choose Level: 2

Guess the number: 45
Too Low!

Guess the number: 72
Too High!

Guess the number: 63
🎉 Congratulations!
You guessed the correct number.
```

## 🌟 Future Improvements

* Scoreboard
* Limited attempts
* High score tracking
* Timer mode
* Multiplayer mode
* File handling for score saving

## 👨‍💻 Author

**Akash Sharma**

B.Tech (Computer Science & Engineering)
B.S.A. College of Engineering & Technology, Mathura

---

### ⭐ If you enjoyed this project, don't forget to star the repository!
