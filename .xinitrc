/home/sam/bin/,status_xsetroot.sh &
setxkbmap -layout "gb,es" -option "grp:shifts_toggle"
setxkbmap -option caps:escape
[[ -f ~/.Xresources ]] && xrdb -merge -I$HOME ~/.Xresources
exec dwm
