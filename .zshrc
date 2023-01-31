# .zshrc
# Sam Larkin
# https://samlarkin.xyz
# https://github.com/samlarkin
# 2020-08-28

# Prompt
PROMPT='%B%F{255}%n %1~ $%b '


# Aliases
alias s="sudo"
alias p="sudo pacman"
alias pu="sudo pacman -Syyu"
alias v="vim"
alias ls="ls -l --color=auto"
alias la="ls -la --color=auto"
alias grep="grep --color=auto"
alias myip="curl http://ipecho.net/plain; echo"
alias contacts="python /home/sam/projects/contacts/contacts"


# Set vi keybindings
bindkey -v


# History 
export SAVEHIST=1000000
export HISTSIZE=1000
export HISTFILE=$HOME/.zsh_history

# Env preferences
export EDITOR=/usr/bin/vim
export READER=/usr/bin/zathura

# go env
export GOPATH=$HOME/go
export GOROOT=/usr/local/go
export GO111MODULE=on


# PATH
export PATH=$PATH:$HOME/bin
export PATH=$PATH:$HOME/.local/bin
export PATH=$PATH:$GOROOT/bin
export PATH=$PATH:$GOPATH/bin
