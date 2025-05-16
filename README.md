# Minishell

## Introduction
MiniShell is a simplified Unix shell implemented in C, designed to replicate essential features of a real shell. It supports executing built-in and external commands, environment variable handling, redirections, and pipes. This project strengthens understanding of process control, file descriptors, and terminal behavior in a Unix-like environment.

## Features

✅ Execution of built-in commands (cd, echo, pwd, export, unset, env, exit)

✅ Support for external commands using fork, execve, and wait

✅ Pipes (|) to connect multiple commands

✅ Input (<) and output (>, >>) redirections

✅ Heredoc (<<) functionality

✅ Environment variable expansion (e.g., $HOME, $?)

✅ Quotes handling ('single' and "double")

✅ Signal handling (e.g., Ctrl+C, Ctrl+\)

✅ Error handling and proper exit status management

✅ No memory leaks (global variable who Collect all adresse and free them later)
