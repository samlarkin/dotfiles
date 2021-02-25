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
export EDITOR=/usr/bin/vim
export READER=/usr/bin/zathura
export GOPATH=$HOME/go


export PATH=/usr/local/sbin:/usr/local/bin:/usr/bin:/usr/lib/jvm/default/bin:/usr/bin/site_perl:/usr/bin/vendor_perl:/usr/bin/core_perl:$HOME/bin:$HOME/.local/bin:/usr/local/go/bin:$HOME/go

