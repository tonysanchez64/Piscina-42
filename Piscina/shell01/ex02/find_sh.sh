#!/bin/sh

find . -type f -name "*.sh" -execdir sh -c 'printf "%s\n" "${0%.sh}"' {} \;
