#!/bin/bash

. colors.sh
. param.sh
choice="y"

while test [ "$choice" != "n" ] || [ "$choice" != "N" ]; do
    clear
    echo -e "$welcome"
    echo "$start"
    echo "*                Do you want to encode or decode a message? (encode/decode)               *"
    echo "$end"
    read choice2
      if [ "$choice2" = "encode" ] || [ "$choice2" = "ENCODE" ] ; then
          clear
          echo -e "$welcome"
          echo "$start"
          echo "*                      Please enter the message you want to encode :                      *"
          echo -e "$alert"
          echo "$end"
          echo ""
          read textToCode
          encode
      elif [ "$choice2" = "decode" ] || [ "$choice2" = "DECODE" ] ; then
          clear
          echo -e "$welcome"
          echo "$start"
          echo "*                      Please enter the message you want to decode :                      *"
          echo -e "$alert"
          echo "$end"
          echo ""
          read textToCode
          decode
      fi
    clear
    echo -e "$welcome"
    echo "$start"
    echo "*                        Do you want to continue the program ? (1/2)                      *"
    echo "$end "
    select choice in Yes No
      do
        case $choice in
          "Yes")
          break ;;
          "No")
          endProg
          clear
          exit 0;
        esac
    done
done
