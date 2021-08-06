#!/bin/bash

problem_name=covid-19
sandbox=$(dirname "$0")

"${sandbox}/${problem_name}.exe" "$@"
