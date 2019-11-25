echo '======================================================='
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
$DIR/packages.sh
$DIR/linux.sh

echo '======================================================='

/bin/bash