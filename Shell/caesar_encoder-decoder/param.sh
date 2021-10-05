#!/bin/bash
# Managing variables and functions

. colors.sh

welcome="
*******************************************************************************************
*                                                                                         *
*      Welcome to ${blue}R.Loabuirna${default}, the program that allows you to encrypt your messages!      *
*                                                                                         *
*                                                                                         *
*                                                                                         *
*******************************************************************************************"

start="
*******************************************************************************************
*                                                                                         *"

end="*                                                                                         *
*******************************************************************************************"

alert="*                                                                                         *
*                                     ${red}/!\ WARNING /!\${default}                                     *
*                        Do not use special or numeric characters!                        *
*              For using numeric characters, please convert to Roman numeral!             *"

error="*                                     Entered error !                                     *
*                                ${red}Beware of sensitive case!${default}                                *"

thumbs="*                                                                                         *
*                                             ${magenta}████${default}                                        *
*                                             ${magenta}█████${default}                                       *
*                                             ${magenta}██████${default}                                      *
*                                             ${magenta}███████${default}                                     *
*                                            ${magenta}████████${default}                                     *
*                                            ${magenta}████████${default}                                     *
*                                           ${magenta}█████████${default}                                     *
*                                          ${magenta}█████████${default}                                      *
*                                         ${magenta}█████████${default}                                       *
*                                        ${magenta}█████████${default}                                        *
*                                        ${magenta}██████████████████${default}                               *
*                                      ${magenta}█████████████████████${default}                              *
*                                     ${magenta}███████████████████████${default}                             *
*                          ${magenta}████████─██████████████████████████${default}                            *
*                          ${magenta}████████─███████████████████████████${default}                           *
*                          ${magenta}████████─████████████████████████████${default}                          *
*                          ${magenta}████████─████████████████████████████${default}                          *
*                          ${magenta}████████─████████████████████████████${default}                          *
*                          ${magenta}████████─████████████████████████████${default}                          *
*                          ${magenta}████████─███████████████████████████${default}                           *
*                          ${magenta}████████─██████████████████████████${default}                            *
*                          ${magenta}████████─█████████████████████████${default}                             *
*                          ${magenta}████████─████████████████████████${default}                              *
*                          ${magenta}████████─███████████████████████${default}                               *"


errorSaisie() {
  clear
  echo -e "$welcome"
  echo "$start"
  echo -e "$error"
  echo "$end"
  sleep 2
  continue
}

register() {
  echo "$textToCode" | tr 'A-Za-z' 'N-ZA-Mn-za-m' > $choix2.txt
  echo "$start"
  echo "*                         Your coded message has been recorded !                          *"
  echo -e "$thumbs"
  echo "$end"
  sleep 2
  continue
}

endProg() {
  clear
  #goodbye message
  echo "$start"
  echo ""
  echo ""
  echo ""
  echo ""
  echo ""
  echo ""
  echo ""
  echo ""
  echo "$end"
  sleep 3
}

decode() {
  clear
  echo -e "$welcome"
  echo "$start"
  echo "*                        Here is the post you decided to decide :                         *"
  echo "$end"
  echo ""
  echo "          $textToCode" | tr 'A-Za-z' 'N-ZA-Mn-za-m'
  echo "$start"
  echo "*                        Do you want to save your message ? (1/2)                         *"
  echo "$end"
  select choix3 in Yes No
    do
      case $choix3 in
        "Yes")
        register
        break ;;
        "No")
        break ;;
      esac
  done
}

code() {
  clear
  echo -e "$welcome"
  echo "$start"
  echo "*                        Here is the message you decided to code :                        *"
  echo "$end"
  echo ""
  echo "          $textToCode" | tr 'A-Za-z' 'N-ZA-Mn-za-m'
  echo ""
  echo "$start"
  echo "*                        Do you want to save your message ? (1/2)                         *"
  echo "$end"
  select choix3 in Yes No
    do
      case $choix3 in
        "Yes")
        register
        break ;;
        "No")
        break ;;
      esac
  done
}
