#!/bin/bash

problem_name=amd
sandbox=$(dirname "$0")

"${sandbox}/${problem_name}.exe" "$@"
