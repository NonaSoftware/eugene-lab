//PART PROPERTIES
Property Name(txt);
Property Sequence(txt);
Property Left_Overhang(txt);
Property Right_Overhang(txt);
Property Type(txt);
Property Resistance(txt);
Property Level(txt);

//PART TYPES
Part terminator_r(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);
Part reporter(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);
Part promoter(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);
Part gene(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);
Part terminator(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);
Part promoter_r(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);
//Part type(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);
Part gene_r(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);

//PARTS
terminator_r B0015_rev(.Name("B0015_rev"), .Sequence("tataaacgcagaaaggcccacccgaaggtgagccagtgtgactctagtagagagcgttcaccgacaaacaacagataaaacgaaaggcccagtctttcgactgagcctttcgttttatttgatgcctgg"), .Left_Overhang(""), .Right_Overhang(""), .Type("terminator_r"), .Resistance(""), .Level(""));
gene_r exsC_rev(.Name("exsC_rev"), .Sequence("tcaaaccctcatgccgaccgcagcgaccgcctcgcgatcactgtcgcacggcagcaggcgctgccagaactcggcgtgatcgagcagattggccaaggtcgcctcgaagcattcgagggtcagttgcgctgcgagaatctgcgcatacaactggaccttgccggtcagctcgtcgaagccgaaatgcagatcgaaacggtgccaatggcggttgaagctggcgagctggcgaaagatcccctcgcccagcacatcgatgcccgccacatcggcctccagcaacagacgctcgcgctcggcgagcagcaacagggtgacgcccacctgttcgtcgaacaggaggctcgccatgccctcctcgtcgagggacagggaaggcaaaccgatacggcctgcgaactcggcaagcagtcggttgaccttgctcgttaaatccat"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene_r"), .Resistance(""), .Level(""));
promoter pBAD(.Name("pBAD"), .Sequence("acattgattatttgcacggcgtcacactttgctatgccatagcatttttatccataagattagcggatcctacctgacgctttttatcgcaactctctactgtttctccatacccgtttttttgggctagc"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter"), .Resistance(""), .Level(""));
gene lacI(.Name("lacI"), .Sequence("gtgaaaccagtaacgttatacgatgtcgcagagtatgccggtgtctcttatcagaccgtttcccgcgtggtgaaccaggccagccacgtttctgcgaaaacgcgggaaaaagtggaagcggcgatggcggagctgaattacattcccaaccgcgtggcacaacaactggcgggcaaacagtcgttgctgattggcgttgccacctccagtctggccctgcacgcgccgtcgcaaattgtcgcggcgattaaatctcgcgccgatcaactgggtgccagcgtggtggtgtcgatggtagaacgaagcggcgtcgaagcctgtaaagcggcggtgcacaatcttctcgcgcaacgcgtcagtgggctgatcattaactatccgctggatgaccaggatgccattgctgtggaagctgcctgcactaatgttccggcgttatttcttgatgtctctgaccagacacccatcaacagtattattttctcccatgaagacggtacgcgactgggcgtggagcatctggtcgcattgggtcaccagcaaatcgcgctgttagcgggcccattaagttctgtctcggcgcgtctgcgtctggctggctggcataaatatctcactcgcaatcaaattcagccgatagcggaacgggaaggcgactggagtgccatgtccggttttcaacaaaccatgcaaatgctgaatgagggcatcgttcccactgcgatgctggttgccaacgatcagatggcgctgggcgcaatgcgcgccattaccgagtccgggctgcgcgttggtgcggatatctcggtagtgggatacgacgataccgaagacagctcatgttatatcccgccgttaaccaccatcaaacaggattttcgcctgctggggcaaaccagcgtggaccgcttgctgcaactctctcagggccaggcggtgaagggcaatcagctgttgcccgtctcactggtgaaaagaaaaaccaccctggcgcccaatacgcaaaccgcctctccccgcgcgttggccgattcattaatgcagctggcacgacaggtttcccgactggaaagcgggcagtga"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene"), .Resistance(""), .Level(""));
reporter gfp(.Name("gfp"), .Sequence("atgagtaaaggagaagaacttttcactggagttgtcccaattcttgttgaattagatggtgatgttaatgggcacaaattttctgtcagtggagagggtgaaggtgatgcaacatacggaaaacttacccttaaatttatttgcactactggaaaactacctgttccatggccaacacttgtcactactttgacttatggtgttcaatgcttttcaagatacccagatcatatgaaacggcatgactttttcaagagtgccatgcccgaaggttatgtacaggaaagaactatatttttcaaagatgacgggaactataagacacgtgctgaagtcaagtttgaaggtgatacacttgttaatagaatcgagttaaaaggtattgattttaaagaagatggaaacattcttggacacaagttggaatacaactataactcacacaatgtatacatcatggcagacaaacaaaagaatggaatcaaagttaacttcaaaattagacacaacattgaagatggaagcgttcaactagcagaccattatcaacaaaatactccaattggcgatggccctgtccttttaccagacaaccattacctgtccacacaatctgccctttcgaaagatcccaacgaaaagagagaccacatggtccttcttgagtttgtaacagctgctgggattacacatggcatggatgaactatacaaaaggcctgcagcaaacgacgaaaactacgcttaa"), .Left_Overhang(""), .Right_Overhang(""), .Type("reporter"), .Resistance(""), .Level(""));
gene exsA(.Name("exsA"), .Sequence("atgcaaggagccaaatctcttggccgaaagcagataacgtcttgtcattggaacattccaactttcgaatacagggtaaacaaggaagagggcgtatatgttctgctcgagggcgaactgaccgtccaggacatcgattccactttttgcctggcgcctggcgagttgcttttcgtccgccgcggaagctatgtcgtaagtaccaagggaaaggacagccgaatactctggattccattatctgcccagtttctacaaggcttcgtccagcgcttcggcgcgctgttgagtgaagtcgagcgttgcgacgagcccgtgccgggcatcatcgcgttcgctgccacgcctctgctggccggttgcgtcaaggggttgaaggaattgcttgtgcatgagcatccgccgatgctcgcctgcctgaagatcgaggagttgctgatgctcttcgcgttcagtccgcaggggccgctgctgatgtcggtcctgcggcaactgagcaaccggcatgtcgagcgtctgcagctattcatggagaagcactacctcaacgagtggaagctgtccgacttctcccgcgagttcggcatggggctgaccaccttcaaggagctgttcggcagtgtctatggggtttcgccgcgcgcctggatcagcgagcggagaatcctctatgcccatcagttgctgctcaacagcgacatgagcatcgtcgacatcgccatggaggcgggcttttccagtcagtcctatttcacccagagctatcgccgccgtttcggctgcacgccgagccgctcgcggcaggggaaggacgaatgccgggctaaaaataactga"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene"), .Resistance(""), .Level(""));
promoter_r J23119_rev(.Name("J23119_rev"), .Sequence("gctagcattatacctaggactgagctagctgtcaa"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter_r"), .Resistance(""), .Level(""));
gene araC(.Name("araC"), .Sequence("atggctgaagcgcaaaatgatcccctgctgccgggatactcgtttaatgcccatctggtggcgggtttaacgccgattgaggccaacggttatctcgatttttttatcgaccgaccgctgggaatgaaaggttatattctcaatctcaccattcgcggtcagggggtggtgaaaaatcagggacgagaatttgtttgccgaccgggtgatattttgctgttcccgccaggagagattcatcactacggtcgtcatccggaggctcgcgaatggtatcaccagtgggtttactttcgtccgcgcgcctactggcatgaatggcttaactggccgtcaatatttgccaatacggggttctttcgcccggatgaagcgcaccagccgcatttcagcgacctgtttgggcaaatcattaacgccgggcaaggggaagggcgctattcggagctgctggcgataaatctgcttgagcaattgttactgcggcgcatggaagcgattaacgagtcgctccatccaccgatggataatcgggtacgcgaggcttgtcagtacatcagcgatcacctggcagacagcaattttgatatcgccagcgtcgcacagcatgtttgcttgtcgccgtcgcgtctgtcacatcttttccgccagcagttagggattagcgtcttaagctggcgcgaggaccaacgtatcagccaggcgaagctgcttttgagcaccacccggatgcctatcgccaccgtcggtcgcaatgttggttttgacgatcaactctatttctcgcgggtatttaaaaaatgcaccggggccagcccgagcgagttccgtgccggttgtgaagaaaaagtgaatgatgtagccgtcaagttgtcataa"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene"), .Resistance(""), .Level(""));
promoter pexsC(.Name("pexsC"), .Sequence("gatgtggcttttttcttaaaagaaaagtctctcagtgacaaaagcgatgcatagcccggtgctagcatgcgctgagcttt"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter"), .Resistance(""), .Level(""));
promoter pTet_star(.Name("pTet_star"), .Sequence("ttttcagcaggacgcactgacctccctatcagtgatagagattgacatccctatcagtgatagagatactgagcacatat"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter"), .Resistance(""), .Level(""));
promoter pphlF(.Name("pphlF"), .Sequence("tctgattcgttaccaattgacatgatacgaaacgtaccgtatcgttaaggt"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter"), .Resistance(""), .Level(""));
gene_r tetR_rev(.Name("tetR_rev"), .Sequence("ttaggacccactttcacatttaagttgtttttctaatccgcatatgatcaattcaaggccgaataagaaggctggctctgcaccttggtgatcaaataattcgatagcttgtcgtaataatggcggcatactatcagtagtaggtgtttccctttcttctttagcgacttgatgctcttgatcttccaatacgcaacctaaagtaaaatgccccacagcgctgagtgcatataatgcattctctagtgaaaaaccttgttggcataaaaaggctaattgattttcgagagtttcatactgtttttctgtaggccgtgtacctaaatgtacttttgctccatcgcgatgacttagtaaagcacatctaaaacttttagcgttattacgtaaaaaatcttgccagctttccccttctaaagggcaaaagtgagtatggtgcctatctaacatctcaatggctaaggcgtcgagcaaagcccgcttattttttacatgccaatacaatgtaggctgctctacacctagcttctgggcgagtttacgggttgttaaaccttcgattccgacctcattaagcagctctaatgcgctgttaatcactttacttttatctaatctggacat"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene_r"), .Resistance(""), .Level(""));
gene exsD(.Name("exsD"), .Sequence("atggagcaggaagacgataagcagtactcccgagaagcggtgttcgctggcaggcgggtatccgtggtgggctcggacgcccgctcgcggggtcgggtgccgggttacgcatcgagcagtttgtatcgtgagtccggaatcatcagtgcgcggcaactggcgttgctgcagcggatgctgccgcgcctgcggctggagcaactgttccgctgcgagtggttgcagcagcgcctggcgcgcggcctggcgctggggcgcgaagaggtgcggcagattctcctctgcgcggcgcaggacgacgacggctggtgctccgaactgggcgaccgggtcaacctcgccgtgccgcagtcgatgatcgactgggtcctgctgccggtctatggctggtgggaaagcctgctcgaccaggcgatccccggctggcgcctgtcgctggtggagctggagacccagtcccggcaactgcgagtcaagtccgaattctggtcccgcgtggccgagctggagccggagcaggcccgcgaggaactggccagggtcgccaagtgccaggcgcgcacccaggaacaggtggccgaactggccggcaagctggagacggcttcggcactggcgaagagcgcctggccgaactggcagcggggcatggcgacgctgctcgccagcggcgggctggccggcttcgagccgatccccgaggtcctcgaatgcctctggcaacctctctgccggctggacgacgacgtcggcgcggcggacgccgtccaggcctggctgcacgaacgcaacctgtgccaggcacaggatcacttctactggcagagctga"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene"), .Resistance(""), .Level(""));
promoter pTac(.Name("pTac"), .Sequence("caatgcttctggcgtcaggcagccatcggaagctgtggtatggctgtgcaggtcgtaaatcactgcataattcgtgtcgctcaaggcgcactcccgttctggataatgttttttgcgccgacatcataacggttctggcaaatattctgaaatgagctgttgacaattaatcatcggctcgtataatgtgtggaattgtgagcgctcacaatttcacacaggaaaca"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter"), .Resistance(""), .Level(""));
promoter pLux_star(.Name("pLux_star"), .Sequence("acctgtaggatcgtacaggtttacgcaagaaaatggtttgttactttcgaataaa"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter"), .Resistance(""), .Level(""));
gene phlF(.Name("phlF"), .Sequence("atggcacgtaccccgagccgtagcagcattggtagcctgcgtagtccgcatacccataaagcaattctgaccagcaccattgaaatcctgaaagaatgtggttatagcggtctgagcattgaaagcgttgcacgtcgtgccggtgcaagcaaaccgaccatttatcgttggtggaccaataaagcagcactgattgccgaagtgtatgaaaatgaaagcgaacaggtgcgtaaatttccggatctgggtagctttaaagccgatctggattttctgctgcgtaatctgtggaaagtttggcgtgaaaccatttgtggtgaagcatttcgttgtgttattgcagaagcacagctggaccctgcaaccctgacccagctgaaagatcagtttatggaacgtcgtcgtgagatgccgaaaaaactggttgaaaatgccattagcaatggtgaactgccgaaagataccaatcgtgaactgctgctggatatgatttttggtttttgttggtatcgcctgctgaccgaacagctgaccgttgaacaggatattgaagaatttaccttcctgctgattaatggtgtttgtccgggtacacagcgttaa"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene"), .Resistance(""), .Level(""));
promoter pipaH(.Name("pipaH"), .Sequence("gcgaaaatgacatcaaaaacgccattaacctgatgttctggggaatataaatgtcaggctagggtcaaaaatcgtggcgttgacaaaatggctgcgttacgtcattgagcatatccaggactggccggcaaaccgggtacgcgatctgttgccttggaaagttgatctgacctctcagtaaatatcaatacggttctgacgagccgcttaccgttcaaatatgaagtacgatgtttaactaaccgaaaaacaagaacaatacggtgcaaacaggccattcacggttaactgaaacagtatcgtttttttacagccaattttgtttatccttattataataaaaaagtgct"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter"), .Resistance(""), .Level(""));
gene_r invF_rev(.Name("invF_rev"), .Sequence("tcatttgtctgccaattgaataatatttgataatttccgcggcgaaacgccgatcagctctttgatctcactagaaaaatgtgaaggcgatgagtaaccatgattaacggctaattgggtgatgttctcgtggccttctacactattcagcagcgattgcgccatacgccagtttcgtaattcactcttcgcttttccgcccaacgctctgctgcacaaacgacgaaaatgggtataagaaacgccatagtcttctcccagcattctcatcgtgttgccgctggttgactgagcgagtaaatagccaaccaaccagtaactctcgctttttcgtaacagcgccagtaccttattgaaggccggagaaggcgtaataatttgctgcaaaaaccagtactgcagcgtttacgatcttgccaaatagcgcgaaactcaggactcagcaaaacccatttatcggattcagcatatgtcgtgtccactaatcctgcgccatcgataaatgccagtaatttgctgagtacttcaatttttaacggtcgaaaaaccaggtctcctgatactggtgcgacaacggcctgctcgcaaaaaagcagcgcgccttcctgaatcaggcaattttcattgtgtcggctttcagaaaatgacatatgcagcttttgcgcggaacacgtctgtataaaccatgcttccgggctgcggattttccgcttctctccttctttaagtacttcctgcgtatttagcat"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene_r"), .Resistance(""), .Level(""));
gene sicA(.Name("sicA"), .Sequence("atggattatcaaaataatgtcagcgaagaacgtgttgcggaaatgatttgggatgccgttagtgaaggcgccacgctaaaagacgttcatgggatccctcaagatatgatggacggtttatatgctcatgcttatgagttttataaccagggacgactggatgaagctgagacgttctttcgtttcttatgcatttatgatttttacaatcccgattacaccatgggactggcggcagtatgccaactgaaaaaacaatttcagaaagcatgtgacctttatgcagtagcgtttacgttacttaaaaatgattatcgccccgttttttttaccgggcagtgtcaattattaatgcgtaaggcagcaaaagccagacagtgttttgaacttgtcaatgaacgtactgaagatgagtctctgcgggcaaaagcgttggtctatctggaggcgctaaaaacggcggagacagagcagcacagtgaacaagaaaaggaataa"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene"), .Resistance(""), .Level(""));
gene tetR(.Name("tetR"), .Sequence("atgtccagattagataaaagtaaagtgattaacagcgcattagagctgcttaatgaggtcggaatcgaaggtttaacaacccgtaaactcgcccagaagctaggtgtagagcagcctacattgtattggcatgtaaaaaataagcgggctttgctcgacgccttagccattgagatgttagataggcaccatactcacttttgccctttagaaggggaaagctggcaagattttttacgtaataacgctaaaagttttagatgtgctttactaagtcatcgcgatggagcaaaagtacatttaggtacacggcctacagaaaaacagtatgaaactctcgaaaatcaattagcctttttatgccaacaaggtttttcactagagaatgcattatatgcactcagcgctgtggggcattttactttaggttgcgtattggaagatcaagagcatcaagtcgctaaagaagaaagggaaacacctactactgatagtatgccgccattattacgacaagctatcgaattatttgatcaccaaggtgcagagccagccttcttattcggccttgaattgatcatatgcggattagaaaaacaacttaaatgtgaaagtgggtcctaa"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene"), .Resistance(""), .Level(""));
gene luxR(.Name("luxR"), .Sequence("atgaaaaacataaatgccgacgacacatacagaataattaataaaattaaagcttgtagaagcaataatgatattaatcaatgcttatctgatatgactaaaatggtacattgtgaatattatttactcgcgatcatttatcctcattctatggttaaatctgatatttcaatcctagataattaccctaaaaaatggaggcaatattatgatgacgctaatttaataaaatatgatcctatagtagattattctaactccaatcattcaccaattaattggaatatatttgaaaacaatgctgtaaataaaaaatctccaaatgtaattaaagaagcgaaaacatcaggtcttatcactgggtttagtttccctattcatacggctaacaatggcttcggaatgcttagttttgcacattcagaaaaagacaactatatagatagtttatttttacatgcgtgtatgaacataccattaattgttccttctctagttgataattatcgaaaaataaatatagcaaataataaatcaaacaacgatttaaccaaaagagaaaaagaatgtttagcgtgggcatgcgaaggaaaaagctcttgggatatttcaaaaatattaggttgcagtgagcgtactgtcactttccatttaaccaatgcgcaaatgaaactcaatacaacaaaccgctgccaaagtatttctaaagcaattttaacaggagcaattgattgcccatactttaaaaattaa"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene"), .Resistance(""), .Level(""));
gene invF(.Name("invF"), .Sequence("atgctaaatacgcaggaagtacttaaagaaggagagaagcggaaaatccgcagcccggaagcatggtttatacagacgtgttccgcgcaaaagctgcatatgtcattttctgaaagccgacacaatgaaaattgcctgattcaggaaggcgcgctgcttttttgcgagcaggccgttgtcgcaccagtatcaggagacctggtttttcgaccgttaaaaattgaagtactcagcaaattactggcatttatcgatggcgcaggattagtggacacgacatatgctgaatccgataaatgggttttgctgagtcctgagtttcgcgctatttggcaagatcgtaaacgctgcagtactggtttttgcagcaaattattacgccttctccggccttcaataaggtactggcgctgttacgaaaaagcgagagttactggttggttggctatttactcgctcagtcaaccagcggcaacacgatgagaatgctgggagaagactatggcgtttcttatacccattttcgtcgtttgtgcagcagagcgttgggcggaaaagcgaagagtgaattacgaaactggcgtatggcgcaatcgctgctgaatagtgtagaaggccacgagaacatcacccaattagccgttaatcatggttactcatcgccttcacatttttctagtgagatcaaagagctgatcggcgtttcgccgcggaaattatcaaatattattcaattggcagacaaatga"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene"), .Resistance(""), .Level(""));
promoter psicA(.Name("psicA"), .Sequence("ccacaagaaacgaggtacggcattgagccgcgtaaggcagtagcgatgtattcattgggcgttttttgaatgttcactaaccaccgtcggggtttaataactgca"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter"), .Resistance(""), .Level(""));
promoter_r pLux_star_rev(.Name("pLux_star_rev"), .Sequence("tttattcgaaagtaacaaaccattttcttgcgtaaacctgtacgatcctacaggt"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter_r"), .Resistance(""), .Level(""));
promoter J23119(.Name("J23119"), .Sequence("ttgacagctagctcagtcctaggtataatgctagc"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter"), .Resistance(""), .Level(""));
promoter_r pBAD_rev(.Name("pBAD_rev"), .Sequence("gctagcccaaaaaaacgggtatggagaaacagtagagagttgcgataaaaagcgtcaggtaggatccgctaatcttatggataaaaatgctatggcatagcaaagtgtgacgccgtgcaaataatcaatgt"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter_r"), .Resistance(""), .Level(""));
gene_r luxR_rev(.Name("luxR_rev"), .Sequence("ttaatttttaaagtatgggcaatcaattgctcctgttaaaattgctttagaaatactttggcagcggtttgttgtattgagtttcatttgcgcattggttaaatggaaagtgacagtacgctcactgcaacctaatatttttgaaatatcccaagagctttttccttcgcatgcccacgctaaacattctttttctcttttggttaaatcgttgtttgatttattatttgctatatttatttttcgataattatcaactagagaaggaacaattaatggtatgttcatacacgcatgtaaaaataaactatctatatagttgtctttttctgaatgtgcaaaactaagcattccgaagccattgttagccgtatgaatagggaaactaaacccagtgataagacctgatgttttcgcttctttaattacatttggagattttttatttacagcattgttttcaaatatattccaattaattggtgaatgattggagttagaataatctactataggatcatattttattaaattagcgtcatcataatattgcctccattttttagggtaattatctaggattgaaatatcagatttaaccatagaatgaggataaatgatcgcgagtaaataatattcacaatgtaccattttagtcatatcagataagcattgattaatatcattattgcttctacaagctttaattttattaattattctgtatgtgtcgtcggcatttatgtttttcat"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene_r"), .Resistance(""), .Level(""));
promoter pipaH_star(.Name("pipaH_star"), .Sequence("gcgaaaatgacatcaaaaacgccattaacctgatgttctggggaatataaatgtcaggctagggtcaaaaatcgtggcgttgacaaaatggctgcgttacgtcattgagcatatccaggactggccggcaaaccgggtacgcgatctgttgccttggaaagttgatctgacctctcagtaaatatcaatacggttctgacgagccgcttaccgttcaaatatgaagtacgatgtttaactaaccgaaaaacaagaacaatacggtgcaaacaggccattcacggttaactgaaacagtatcgtttttttacagccaattttgtttatccttattaagataaaaaagtgct"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter"), .Resistance(""), .Level(""));
terminator B0015(.Name("B0015"), .Sequence("ccaggcatcaaataaaacgaaaggctcagtcgaaagactgggcctttcgttttatctgttgtttgtcggtgaacgctctctactagagtcacactggctcaccttcgggtgggcctttctgcgtttata"), .Left_Overhang(""), .Right_Overhang(""), .Type("terminator"), .Resistance(""), .Level(""));
reporter rfp(.Name("rfp"), .Sequence("atggcttcctccgaagacgttatcaaagagttcatgcgtttcaaagttcgtatggaaggttccgttaacggtcacgagttcgaaatcgaaggtgaaggtgaaggtcgtccgtacgaaggtacgcagaccgctaaactgaaagttaccaaaggtggtccgctgccgttcgcttgggacatcctgtccccgcagttccagtacggttccaaagcttacgttaaacacccggctgacatcccggactacctgaaactgtccttcccggaaggtttcaaatgggaacgtgttatgaacttcgaagacggtggtgttgttaccgttacccaggactcctccctgcaagacggtgagttcatctacaaagttaaactgcgtggtactaacttcccgtccgacggtccggttatgcagaaaaaaaccatgggttgggaagcttccaccgaacgtatgtacccggaagacggtgctctgaaaggtgaaatcaaaatgcgtctgaaactgaaagacggtggtcactacgacgctgaagttaaaaccacctacatggctaaaaaaccggttcagctgccgggtgcttacaaaaccgacatcaaactggacatcacctcccacaacgaagactacaccatcgttgaacagtacgaacgtgctgaaggtcgtcactccaccggtgctgcagcaaacgacgaaaactacgcttaa"), .Left_Overhang(""), .Right_Overhang(""), .Type("reporter"), .Resistance(""), .Level(""));
gene mxiE(.Name("mxiE"), .Sequence("atgagtaaatataaaggcctgaacaccagcaacatgttctacatctacagctctggtcatgaaccggtgaacgttgaactggtgaaagataaagaacgtaacatcatcgaactggcaccggcgtggaaaggctttttctttgtgcgtaaccagaacatcaaattcagcgataacgttaactaccactaccgcttcaacatcaactcttgcgcaaaattcctggcgttttgggattattttagcggcgccctggttgaacattctcacgcagaaaaatgcatccatttctaccacgaaaacgatctgcgtgatagctgtaatacggaatctatgctggataaactgatgctgcgcttcatttttagtagcgatcagaacgtgtctaatgccctggcaatgatccgtatgaccgaaagttatcatctggttctgtacctgctgcgtacgattgaaaaagaaaaagaagtgcgcatcaaaagcctgaccgaacactatggcgtttctgaagcgtactttcgtagtctgtgtcgcaaagcgctgggtgccaaagtgaaagaacagctgaacacgtggcgcctggtgaatggcctgctggatgttttcctgcataaccagaccattacgagcgcggccatgaacaatggttatgcgtctaccagtcacttcagcaatgaaattaaaacgcgtctgggctttagtgcccgcgaactgagcaacatcaccttcctggtgaagaaaattaatgaaaaaatctaa"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene"), .Resistance(""), .Level(""));
gene_r lacI_rev(.Name("lacI_rev"), .Sequence("tcactgcccgctttccagtcgggaaacctgtcgtgccagctgcattaatgaatcggccaacgcgcggggagaggcggtttgcgtattgggcgccagggtggtttttcttttcaccagtgagacgggcaacagctgattgcccttcaccgcctggccctgagagagttgcagcaagcggtccacgctggtttgccccagcaggcgaaaatcctgtttgatggtggttaacggcgggatataacatgagctgtcttcggtatcgtcgtatcccactaccgagatatccgcaccaacgcgcagcccggactcggtaatggcgcgcattgcgcccagcgccatctgatcgttggcaaccagcatcgcagtgggaacgatgccctcattcagcatttgcatggtttgttgaaaaccggacatggcactccagtcgccttcccgttccgctatcggctgaatttgattgcgagtgagatatttatgccagccagccagacgcagacgcgccgagacagaacttaatgggcccgctaacagcgcgatttgctggtgacccaatgcgaccagatgctccacgcccagtcgcgtaccgtcttcatgggagaaaataatactgttgatgggtgtctggtcagagacatcaagaaataacgccggaacattagtgcaggcagcttccacagcaatggcatcctggtcatccagcggatagttaatgatcagcccactgacgcgttgcgcgagaagattgtgcaccgccgctttacaggcttcgacgccgcttcgttctaccatcgacaccaccacgctggcacccagttgatcggcgcgagatttaatcgccgcgacaatttgcgacggcgcgtgcagggccagactggaggtggcaacgccaatcagcaacgactgtttgcccgccagttgttgtgccacgcggttgggaatgtaattcagctccgccatcgccgcttccactttttcccgcgttttcgcagaaacgtggctggcctggttcaccacgcgggaaacggtctgataagagacaccggcatactctgcgacatcgtataacgttactggtttcac"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene_r"), .Resistance(""), .Level(""));
gene ipgC(.Name("ipgC"), .Sequence("atgtctttaaatatcaccgaaaatgaaagcatctctactgcagtaattgatgcaattaactctggcgctacactgaaagatattaatgcaattcctgatgatatgatggatgacatttattcatatgcttatgacttttacaacaaaggaagaatagaggaagctgaagttttcttcaggtttttatgtatatacgacttttacaatgtagactacattatgggactcgcagctatttatcagataaaagaacagttccaacaagcagcagacctttatgctgtcgcttttgcattaggaaaaaatgactatacaccagtattccatactggacaatgtcagcttcggttgaaagcccccttaaaagctaaagagtgcttcgaactcgtaattcaacacagcaatgatgaaaaattaaaaataaaagcacaatcatacttggacgcaattcaggatatcaaggagtaa"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene"), .Resistance(""), .Level(""));
promoter pexsD(.Name("pexsD"), .Sequence("gaaggacgaatgccgggctaaaaataactgacgttttttgaaagcccggtagcggctgcatgagtagaatcggcccaaat"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter"), .Resistance(""), .Level(""));
promoter pLux(.Name("pLux"), .Sequence("acctgtaggatcgtacaggtttacgcaagaaaatggtttgttatagtcgaataaa"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter"), .Resistance(""), .Level(""));
gene_r araC_rev(.Name("araC_rev"), .Sequence("ttatgacaacttgacggctacatcattcactttttcttcacaaccggcacggaactcgctcgggctggccccggtgcattttttaaatacccgcgagaaatagagttgatcgtcaaaaccaacattgcgaccgacggtggcgataggcatccgggtggtgctcaaaagcagcttcgcctggctgatacgttggtcctcgcgccagcttaagacgctaatccctaactgctggcggaaaagatgtgacagacgcgacggcgacaagcaaacatgctgtgcgacgctggcgatatcaaaattgctgtctgccaggtgatcgctgatgtactgacaagcctcgcgtacccgattatccatcggtggatggagcgactcgttaatcgcttccatgcgccgcagtaacaattgctcaagcagatttatcgccagcagctccgaatagcgcccttccccttgcccggcgttaatgatttgcccaaacaggtcgctgaaatgcggctggtgcgcttcatccgggcgaaagaaccccgtattggcaaatattgacggccagttaagccattcatgccagtaggcgcgcggacgaaagtaaacccactggtgataccattcgcgagcctccggatgacgaccgtagtgatgaatctctcctggcgggaacagcaaaatatcacccggtcggcaaacaaattctcgtccctgatttttcaccaccccctgaccgcgaatggtgagattgagaatataacctttcattcccagcggtcggtcgataaaaaaatcgagataaccgttggcctcaatcggcgttaaacccgccaccagatgggcattaaacgagtatcccggcagcaggggatcattttgcgcttcagccat"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene_r"), .Resistance(""), .Level(""));
gene sicA_star(.Name("sicA_star"), .Sequence("atggattatcaaaataatgtcagcgaagaacgtgttgcggaaatgatttgggatgccgttagtgaaggcgccacgctaaaagacgttcatgggatccctcaagatatgatggacggtttatatgctcatgcttatgagttttataaccagggacgactggatgaagctgagacgttctttcgttacttatgcatttatgatttttacaatcccgattacaccatgggactggcggcagtatgccaactgaaaaaacaatttcagaaagcatgtgacctttatgcagtagcgtttacgttacttaaaaatgattatcgccccgttttttttaccgggcagtgtcaattattaatgcgtaaggcagcaaaagccagacagtgttttgaacttgtcaatgaacgtactgaagatgagtctctgcgggcaaaagcgttggtctatctggaggcgctaaaaacggcggagacagagcagcacagtgaacaagaaaaggaataa"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene"), .Resistance(""), .Level(""));
promoter_r pexsC_rev(.Name("pexsC_rev"), .Sequence("aaagctcagcgcatgctagcaccgggctatgcatcgcttttgtcactgagagacttttcttttaagaaaaaagccacatc"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter_r"), .Resistance(""), .Level(""));
gene exsC(.Name("exsC"), .Sequence("atggatttaacgagcaaggtcaaccgactgcttgccgagttcgcaggccgtatcggtttgccttccctgtccctcgacgaggagggcatggcgagcctcctgttcgacgaacaggtgggcgtcaccctgttgctgctcgccgagcgcgagcgtctgttgctggaggccgatgtggcgggcatcgatgtgctgggcgaggggatctttcgccagctcgccagcttcaaccgccattggcaccgtttcgatctgcatttcggcttcgacgagctgaccggcaaggtccagttgtatgcgcagattctcgcagcgcaactgaccctcgaatgcttcgaggcgaccttggccaatctgctcgatcacgccgagttctggcagcgcctgctgccgtgcgacagtgatcgcgaggcggtcgctgcggtcggcatgagggtttga"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene"), .Resistance(""), .Level(""));
promoter pTet(.Name("pTet"), .Sequence("tttttccctatcagtgatagagattgacatccctatcagtgatagagatactgagcacctcg"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter"), .Resistance(""), .Level(""));
gene_r ipgC_rev(.Name("ipgC_rev"), .Sequence("ttactccttgatatcctgaattgcgtccaagtatgattgtgcttttatttttaatttttcatcattgctgtgttgaattacgagttcgaagcactctttagcttttaagggggctttcaaccgaagctgacattgtccagtatggaatactggtgtatagtcattttttcctaatgcaaaagcgacagcataaaggtctgctgcttgttggaactgttcttttatctgataaatagctgcgagtcccataatgtagtctacattgtaaaagtcgtatatacataaaaacctgaagaaaacttcagcttcctctattcttcctttgttgtaaaagtcataagcatatgaataaatgtcatccatcatatcatcaggaattgcattaatatctttcagtgtagcgccagagttaattgcatcaattactgcagtagagatgctttcattttcggtgatatttaaagacat"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene_r"), .Resistance(""), .Level(""));
//type Name(.Name("Name"), .Sequence("Sequence"), .Left_Overhang("Left_Overhang"), .Right_Overhang("Right_Overhang"), .Type("type"), .Resistance(""), .Level(""));