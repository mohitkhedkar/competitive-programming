#!/bin/bash
awk '{s=int(($2+$3+$4)/30)
    g[10]=g[9]=g[8]="A"
    g[7]=g[6]="B"
    g[5]="C"
    print $0,":",s<5?"FAIL":g[s];}
'