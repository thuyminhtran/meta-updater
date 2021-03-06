DESCRIPTION = "Example Package with 12MB of random, seeded content"
LICENSE = "CLOSED"

SRC_URI = "file://rand_file.py"

FILES_${PN} = "/usr/lib/big-update"

do_install() {
   install -d ${D}/usr/lib/big-update
   python ${S}/../rand_file.py ${D}/usr/lib/big-update/a-big-file $(numfmt --from=iec 12M)
}
