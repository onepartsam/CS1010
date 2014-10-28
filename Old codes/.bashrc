# Bourne Again SHell (bash) init file.
# This file is sourced whenever you invoke a non-login interactive bash.

# Please do not remove the following command,
# which sources the system-wide Bourne Again SHell init file.
if [ -f /usr/local/etc/bash.bashrc ]; then
	source /usr/local/etc/bash.bashrc
fi

# Place your own commands below.

alias dir='ls -l'
alias del='rm -i'
alias evim='vim -y'
alias gw='gcc -Wall'
alias gwlm='gcc -Wall -lm'

readonly LOGNAME USER
