find . -name '*.sh' -type f -exec basename {} \; | rev | cut -c4- | rev
