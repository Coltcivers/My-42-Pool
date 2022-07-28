groups $FT_USER | cut -c $(( ${#FT_USER} + 4 ))- | tr ' ' , | tr -d '\n'

