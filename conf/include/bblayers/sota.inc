
BBLAYERS += "${METADIR}/meta-updater"
BBLAYERS += "${METADIR}/meta-openembedded/meta-filesystems"
BBLAYERS += "${METADIR}/meta-openembedded/meta-oe"

# required for rvi-sota-client
BBLAYERS += "${METADIR}/meta-rust"

# required until json in rvi-sota-client is fixed
BBLAYERS += "${METADIR}/meta-openembedded/meta-python"
