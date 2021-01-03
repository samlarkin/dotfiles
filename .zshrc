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
alias myip="curl http://ipecho.net/plain; echo"


# Set vi keybindings
bindkey -v

# History 
export SAVEHIST=1000000
export HISTSIZE=1000
export HISTFILE=$HOME/.zsh_history
