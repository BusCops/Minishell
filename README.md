# Minishell

Minishell is a simplified Unix shell implemented in C. This project is part of the 42 school curriculum and aims to deepen understanding of process creation, input/output redirection, and signal handling in a Unix-like environment. It replicates key features of a real shell while maintaining simplicity and clarity in its design.

---

## 📦 Features

- ✅ Execution of **built-in commands**:
  - `echo`
  - `cd`
  - `pwd`
  - `export`
  - `unset`
  - `env`
  - `exit`
- ✅ Execution of **external commands**
- ✅ **Pipes** (`|`) to chain commands
- ✅ **Redirections**:
  - Input redirection (`<`)
  - Output redirection (`>`, `>>`)
  - Heredoc (`<<`)
- ✅ **Environment variable expansion** (e.g. `$USER`, `$PATH`, `$?`)
- ✅ **Quote handling** (`'single quotes'`, `"double quotes"`)
- ✅ **Signal handling** (`Ctrl+C`, `Ctrl+\`, heredoc interrupt)
- ✅ Proper **error messages** and **exit status**
- ✅ **Memory management**: no memory leaks (global variable thats collect all adresse to free them later)

---

## ⚙️ How to Compile

Clone the repository and run `make`:

```bash
git clone https://github.com/yourusername/minishell.git
cd minishell
make
```
after you can start executing commands like bash
```
Minishell$ echo Hello World
Hello World
Minishell$ ls -la | grep minishell > output.txt
Minishell$ cat output.txt 
-rwxr-xr-x 1 abenzaho candidates 66312 May 16 10:27 minishell
```
# 👨‍💻 Authors
abenzaho (abdellah benzahour)
ybenchel (Yassine Benchelh)
