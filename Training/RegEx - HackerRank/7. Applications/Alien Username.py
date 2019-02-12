# https://www.hackerrank.com/challenges/alien-username/problem


import re


# Inputs
standard_input = """87
_455894903590720027BFYblVbWxrlDISuncMjQXwwwQ_
_403102979630foXoFscfY
_DevgMmdgyqsClabHIM
_1933375787795592062143nKP_
.62999857894572902222QLhbFyoGlEHjtToRlqdoBg
_74487389998547334020720519732ArklyyAyRzarkupBjfZpd
.68490303220611167726243jsqeges.
_54iGQashrPJouJ.
9831266916591720586p
.89981716695784435049535ZOOghUoQFDGNqsMxJh_
_ss
_vuyAEm
yWWSxHjWqDWFUULwCabwXYLSqZD
.100vYwHiKImHxsWZZbjeymguUx.
_.
_
_9278576752708382168FlaXgxthUE
.QgOsjnjaPWDpKCLfaIyW.
_ss
34831
_
_28451705775585127584506IKZYzuDnqGyAkudpQRgHJ.
.25910726778228413227133875783
_48949ACIDDnroDQMdVWFdotjxWy
_7571890fWInzPNhzGjJravbnWmNQMfpJjEw
QdjMWBDoEdc
.98135002639023664026521ZGHtfDzlEqfdjfaESf
.vGVz.
.
WBAuPSEfmf_
3503XOcPCIiaCLBslzKBwlz.
.396067199pxff.
.nztRavTmuBb
_ss
_23538480506FAkSihPqCeYLtqnAwSENGCfjd_
.15203098FtioL
.7AWYDLCD
_961708489716310LzzOXjWLwX
_ss
_50008056812337650YeAeWMavsiMmGSLPYhiIDP
_212127259211541029147797431
.9321797915302859960590wCUvBH_
.467230.
.
.A
.986783650507877936701293168744HbHTFUwpsXdSnVtahkLoOXORANt
_318438548600492958HujzdwFgR
562xdpQgrKAkohHkFhJRgYZDCG
_4154DQrKSvAGJrHNaIOAHQIY
.021326707736440754874223991205MmeMBoMxRbCH_
.785485797704635644971954615QzD_
.525844925197600unqmnuYP
..
30257hzqZJYWTW
.83794139589904428687504ccuDnHrHQfmkmlrMRWQ.
_05868107434702192925
.23280871740772002884007553GNZShGTYyTnhasheUfrB
.LZMUJgCBJSvajCZjMzWWvXLbezmvF
_69691694171477158969232646_
_299kMsIzhwHjvYMOUskpoZMRsMhwB
.922078910059gRNVPyZkyIgaXHgn_
_ss
668555071986303360843JjiPFaaycyoCJVjCSMwwYcyML.
_29gnqXSoEyoiHESBNAfKNzDwx_
.00876071412168sGZNJhjpsEnSHSqFk.
_9060169498590134228505qW.
_4320437
_
IEJMFRxZLiqDQAfFyqF
nDyzeHEiaVURjpGgiiwY
.40906689811390009mfCxDWmG.
_350783797424454059875_
.40861uGbbqeMoNHeszdlNliJpHobu
_iQxzPEmGIZkAwbuQBYJDeFsFoK.
_TbzGyrXoljSsdlGwuhNYMttss
.588500144xpRJFfaMgvHfDMJWrEEJWaterDYG
_590590ZvUkaKvktoPsoKeJZHSHJlcE
.9377483673369777919635276697yLpz
_CVXDrycqHNCzHobDU
.94.
.04719362268177448977WgTYIeBgCMMZyKa
_2592064978723151103442573FdcilEvCqua.
_ss
.hcaoxRwgiuHLt
_4320147340118583063uLHriNIpfvSbefpAMhtAKBGCWj
.
.2849158197qZsppYeOoAaMAh."""


pattern = r"^[_.]\d+[a-zA-Z]*_?$"

for _ in range(int(input())):
    if re.match(pattern, input()):
        print("VALID")
    else:
        print("INVALID")


# VALID
# VALID
# INVALID
# VALID
# VALID
# VALID
# INVALID
# INVALID
# INVALID
# VALID
# INVALID
# INVALID
# INVALID
# INVALID
# INVALID
# INVALID
# VALID
# INVALID
# INVALID
# INVALID
# INVALID
# INVALID
# VALID
# VALID
# VALID
# INVALID
# VALID
# INVALID
# INVALID
# INVALID
# INVALID
# INVALID
# INVALID
# INVALID
# VALID
# VALID
# VALID
# VALID
# INVALID
# VALID
# VALID
# VALID
# INVALID
# INVALID
# INVALID
# VALID
# VALID
# INVALID
# VALID
# VALID
# VALID
# VALID
# INVALID
# INVALID
# INVALID
# VALID
# VALID
# INVALID
# VALID
# VALID
# VALID
# INVALID
# INVALID
# VALID
# INVALID
# INVALID
# VALID
# INVALID
# INVALID
# INVALID
# INVALID
# VALID
# VALID
# INVALID
# INVALID
# VALID
# VALID
# VALID
# INVALID
# INVALID
# VALID
# INVALID
# INVALID
# INVALID
# VALID
# INVALID
# INVALID
