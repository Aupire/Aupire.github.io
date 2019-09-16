find . -name "*.sh" | rev | cut -c 4- | cut -d '/' -f1 | rev
# | cut -c -3 | rev | cut -d '/' -f2
