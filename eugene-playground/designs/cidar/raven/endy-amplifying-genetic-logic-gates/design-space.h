//PART PROPERTIES
Property Name(txt);
Property Sequence(txt);
Property Left_Overhang(txt);
Property Right_Overhang(txt);
Property Type(txt);
Property Resistance(txt);
Property Level(txt);

//PART TYPES
PartType promoter(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);
PartType gene(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);
PartType terminator(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);
PartType reporter_r(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);
PartType promoter_r(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);
PartType RBS(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);
PartType RBS_r(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);

//PartType type(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);
PartType gene_r(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);
PartType reporter(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);
PartType terminator_r(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);
PartType invertase_site(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);
PartType invertase_site_r(Name, Sequence, Left_Overhang, Right_Overhang, Type, Resistance, Level);

//PARTS
reporter Superfolder_gfp(.Name("Superfolder_gfp"), .Sequence("atgcgtaaaggcgaagagctgttcactggtgtcgtccctattctggtggaactggatggtgatgtcaacggtcataagttttccgtgcgtggcgagggtgaaggtgacgcaactaatggtaaactgacgctgaagttcatctgtactactggtaaactgccggtaccttggccgactctggtaacgacgctgacttatggtgttcagtgctttgctcgttatccggaccatatgaagcagcatgacttcttcaagtccgccatgccggaaggctatgtgcaggaacgcacgatttcctttaaggatgacggcacgtacaaaacgcgtgcggaagtgaaatttgaaggcgataccctggtaaaccgcattgagctgaaaggcattgactttaaagaagacggcaatatcctgggccataagctggaatacaattttaacagccacaatgtttacatcaccgccgataaacaaaaaaatggcattaaagcgaattttaaaattcgccacaacgtggaggatggcagcgtgcagctggctgatcactaccagcaaaacactccaatcggtgatggtcctgttctgctgccagacaatcactatctgagcacgcaaagcgttctgtctaaagatccgaacgagaaacgcgatcatatggttctgctggagttcgtaaccgcagcgggcatcacgcatggtatggatgaactgtacaaatgatga"), .Left_Overhang(""), .Right_Overhang(""), .Type("reporter"), .Resistance(""), .Level(""));
invertase_site attP_Bxb1(.Name("attP_Bxb1"), .Sequence("GTCGTGGTTTGTCTGGTCAACCACCGCGGTCT CAGTGGTGTACGGTACAAACCCCGAC"), .Left_Overhang(""), .Right_Overhang(""), .Type("invertase_site"), .Resistance(""), .Level(""));
gene_r araC_rev(.Name("araC_rev"), .Sequence("aatactgttgaactgccgatgtagtaagtgaaaaagaagtgttggccgtgccttgagcgagcccgaccggggccacgtaaaaaatttatgggcgctctttatctcaactagcagttttggttgtaacgctggctgccaccgctatccgtaggcccaccacgagttttcgtcgaagcggaccgactatgcaaccaggagcgcggtcgaattctgcgattagggattgacgaccgccttttctacactgtctgcgctgccgctgttcgtttgtacgacacgctgcgaccgctatagttttaacgacagacggtccactagcgactacatgactgttcggagcgcatgggctaataggtagccacctacctcgctgagcaattagcgaaggtacgcggcgtcattgttaacgagttcgtctaaatagcggtcgtcgaggcttatcgcgggaaggggaacgggccgcaattactaaacgggtttgtccagcgactttacgccgaccacgcgaagtaggcccgctttcttggggcataaccgtttataactgccggtcaattcggtaagtacggtcatccgcgcgcctgctttcatttgggtgaccactatggtaagcgctcggaggcctactgctggcatcactacttagagaggaccgcccttgtcgttttatagtgggccagccgtttgtttaagagcagggactaaaaagtggtgggggactggcgcttaccactctaactcttatattggaaagtaagggtcgccagccagctatttttttagctctattggcaaccggagttagccgcaatttgggcggtggtctacccgtaatttgctcatagggccgtcgtcccctagtaaaacgcgaagtcggta"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene_r"), .Resistance(""), .Level(""));
invertase_site attB_Bxb1(.Name("attB_Bxb1"), .Sequence("TCGGCCGGCTTGTCGACGACGGCGGTCTCCGT CGTCAGGATCATCCGGGC"), .Left_Overhang(""), .Right_Overhang(""), .Type("invertase_site"), .Resistance(""), .Level(""));
RBS B0031(.Name("B0031"), .Sequence("tcacacaggaaacc"), .Left_Overhang(""), .Right_Overhang(""), .Type("RBS"), .Resistance(""), .Level(""));
promoter_r J23119_rev(.Name("J23119_rev"), .Sequence("cgatcgtaatatggatcctgactcgatcgacagtt"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter_r"), .Resistance(""), .Level(""));
terminator B0014(.Name("B0014"), .Sequence("tcacactggctcaccttcgggtgggcctttctgcgtttatatactagagagagaatataaaaagccagattattaatccggcttttttattattt"), .Left_Overhang(""), .Right_Overhang(""), .Type("terminator"), .Resistance(""), .Level(""));
promoter pTet(.Name("pTet"), .Sequence("tccctatcagtgatagagattgacatccctatcagtgatagagatactgagcac"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter"), .Resistance(""), .Level(""));
//type Name(.Name("Name"), .Sequence("Sequence"), .Left_Overhang("Left_Overhang"), .Right_Overhang("Right_Overhang"), .Type("type"), .Resistance(""), .Level(""));
terminator J61048(.Name("J61048"), .Sequence("ccggcttatcggtcagtttcacctgatttacgtaaaaacccgcttcggcgggtttttgcttttggaggggcagaaagatgaatgactgtccacgacgctatacccaaaagaaa"), .Left_Overhang(""), .Right_Overhang(""), .Type("terminator"), .Resistance(""), .Level(""));
invertase_site attP_TP901(.Name("attP_TP901"), .Sequence("gcgagtttttatttcgtttatttcaattaaggtaactaaaaaaactccttt"), .Left_Overhang(""), .Right_Overhang(""), .Type("invertase_site"), .Resistance(""), .Level(""));
promoter J23119(.Name("J23119"), .Sequence("ttgacagctagctcagtcctaggtataatgctagc"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter"), .Resistance(""), .Level(""));
gene TP901_Integrase(.Name("TP901_Integrase"), .Sequence("atgactaagaaagtagcaatctatacacgagtatccactactaaccaagcagaggaagggttctcaattgatgagcaaattgaccgtttaacaaaatatgctgaagcaatggggtggcaagtatctgatacttatactgatgctggtttttcaggggccaaagagatactctttatcttgttaaggatgtgttcacaaaaaataaaatagactttatctcgcttaatgaaagtattgatacttcttctgctatgggtacgttgtttctcactattctttctgcaattaatgagtttgaaagagagaatataaaagaacgcatgactatccctaaactagggcgagcgaaatctggtaagtctatgatgtggactaagacagcttttgggtattaccacaacagaaagacaggtatattagaaattgttcctttacaagctacaatagttgaacaaatattcactgattatttatcaggaatatcacttacaaaattaagagataaactcaatgaatctggacacatcggtaaagatataccgtggtcttatcgtaccctaagacaaacacttgataatccagtttactgtggttatatcaaatttaaggacagcctatttgaaggtatgcacaaaccaattatcccttatgagacttatttaaaagttcaaaaagagctagaagaaagacaacagcagacttatgaaagaaataacaaccctagacctttccaagctaaatatatgctgtcagggatggcaaggtgcggttactgtggagcacctttaaaaattgttcttggccacaaaagaaaagatggaagccgcactatgaaatatcactgtgcaaatagatttcctcgaaaaacaaaaggaattacagtatataatgacaataaaaagtgtgattcaggaacttatagattaagtaatttagaaaatactgttattgacaacctgattggatttcaagaaaataatgactccttattgaaaattatcaatggcaacaaccaacctattcttgatacttcgtcatttaaaaagcaaatttcacagatcgataaaaaaatacaaaagaactctgatttgtacctaaatgattttatcactatggatgagttgaaagatcgtactgattcccttcaggctgagaaaagctgcttaaagctaagattagccaaaataaatttaatgactctactgctgtttttgagttagttaaaactcagttgggctcaattccgattaatgaactatcatatgataataaaaagaaaatcgtcaacaaccttgtatcaaaggttgatgttactgctgataatgtagatatgatatttaaattccaactcgct"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene"), .Resistance(""), .Level(""));
terminator_r J61048_rev(.Name("J61048_rev"), .Sequence("aaagaaaacccatatcgcagcacctgtcagtaagtagaaagacggggaggttttcgtttttgggcggcttcgcccaaaaatgcatttagtccactttgactggctattcggcc"), .Left_Overhang(""), .Right_Overhang(""), .Type("terminator_r"), .Resistance(""), .Level(""));
terminator_r B0015_rev(.Name("B0015_rev"), .Sequence("atatttgcgtctttccgggtgggcttccactcggtcacactgagatcatctc tcgcaagtggctgtttgttgtctattttgctttccgggtcagaaagctgactcggaaagcaaaataaactacggacc"), .Left_Overhang(""), .Right_Overhang(""), .Type("terminator_r"), .Resistance(""), .Level(""));
promoter pBAD(.Name("pBAD"), .Sequence("agaaaccaattgtccatattgcatcagacattgccgtcactgcgtcttttactggctcttctcgctaaccaaaccggtaaccccgcttattaaaagcattctgtaacaaagcgggaccaaagccatgacaaaaacgcgtaacaaaagtgtctataatcacggcagaaaagtccacattgattatttgcacggcgtcacactttgctatgccatagcatttttatccataagattagcggatcctacctg"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter"), .Resistance(""), .Level(""));
gene Bxb1_Integrase(.Name("Bxb1_Integrase"), .Sequence("atggccggcagagccctggtagtcatccgcctgtcccgcgtcaccgatgctacgacttcaccggagcgtcagctggagtcttgccagcagctctgcgcccagcgcggctgggacgtcgtcggggtagcggaggatctggacgtctccggggcggtcgatccgttcgaccggaagcgcagaccgaacctggcccggtggctagcgttcgaggagcaaccgtttgacgtgatcgtggcgtaccgggtagatcggttgacccgatcgatccggcatcttcagcagctggtccactgggccgaggaccacaagaagctggtcgtctccgcgaccgaagcgcacttcgatacgacgacgccgtttgcggcggtcgtcatcgcgcttatgggaacggtggcgcagatggaattagaagcgatcaaagagcggaaccgttcggctgcgcatttcaatatccgcgccgggaaataccgaggatccctgccgccgtggggatacctgcctacgcgcgtggacggggagtggcggctggtgccggaccctgtgcagcgagagcgcatcctcgaggtgtatcaccgcgtcgtcgacaaccacgagccgctgcatctggtggcccacgacctgaaccggcgtggtgtcctgtcgccgaaggactacttcgcgcagctgcaaggccgcgagccgcagggccgggagtggtcggctaccgcgctgaagcgatcgatgatctccgaggcgatgctcgggtacgcgactctgaacggtaagaccgtccgagacgacgacggagccccgctggtgcgggctgagccgatcctgacccgtgagcagctggaggcgctgcgcgccgagctcgtgaagacctcccgggcgaagcccgcggtgtctaccccgtcgctgctgctgcgggtgttgttctgcgcggtgtgcggggagcccgcgtacaagttcgccgggggaggacgtaagcacccgcgctaccgctgccgctcgatggggttcccgaagcactgcgggaacggcacggtggcgatggccgagtgggacgcgttctgcgaggagcaggtactggatctgctcggggacgcggagcgtctggagaaagtctgggtagcgggctcggactccgcggtcgaactcgcggaggtgaacgcggagctggtggacctgacgtcgctgatcggctccccggcctaccgggcgggctctccgcagcgagaagcactggatgcccgtattgcggcgctggccgcgcggcaagaggagctggagggcctggaggctcgcccgtctggctgggagtggcgcgagaccgggcagcggttcggggactggtggcgggagcaggacaccgcggcaaagaacacctggcttcggtcgatgaacgttcggctgacgttcgacgtccgcggcgggctgactcgcacgatcgacttcggggatcttcaggagtacgagcagcatctcaggctcggcagcgtggtcgaacggctacacaccgggatgtcgaccggttaa"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene"), .Resistance(""), .Level(""));
invertase_site attB_TP901(.Name("attB_TP901"), .Sequence("atgccacaccaattaacatctcaatcaaggtaaatgctttttgctttttttgc"), .Left_Overhang(""), .Right_Overhang(""), .Type("invertase_site"), .Resistance(""), .Level(""));
RBS_r JBEI_RBS_rev(.Name("JBEI_RBS_rev"), .Sequence("tacatatagaggaagaattttctagaaaacttaag"), .Left_Overhang(""), .Right_Overhang(""), .Type("RBS_r"), .Resistance(""), .Level(""));
invertase_site_r attP_Bxb1_rev(.Name("attP_Bxb1_rev"), .Sequence("CGGGCCTACTAGGACTGCTGCCTCTGGCGGCAGCAGCTGTTCGGCCGGCT"), .Left_Overhang(""), .Right_Overhang(""), .Type("invertase_site_r"), .Resistance(""), .Level(""));
promoter P7_Promoter(.Name("P7_Promoter"), .Sequence("taattcctaatttttgttgacactctatcgttgatagagttattttaccactccctatcagtgatagagaaaa"), .Left_Overhang(""), .Right_Overhang(""), .Type("promoter"), .Resistance(""), .Level(""));
RBS JBEI_RBS(.Name("JBEI_ RBS"), .Sequence("gaattcaaaagatcttttaagaaggagatatacat"), .Left_Overhang(""), .Right_Overhang(""), .Type("RBS"), .Resistance(""), .Level(""));
RBS_r invitrogen_RBS_rev(.Name("invitrogen_RBS_rev"), .Sequence("attatatatggagaattaaaa"), .Left_Overhang(""), .Right_Overhang(""), .Type("RBS_r"), .Resistance(""), .Level(""));
terminator B0015(.Name("B0015"), .Sequence("ccaggcatcaaataaaacgaaaggctcagtcgaaagactgggcctttcgttttatctgttgtttgtcggtgaacgct ctctactagagtcacactggctcaccttcgggtgggcctttctgcgtttata"), .Left_Overhang(""), .Right_Overhang(""), .Type("terminator"), .Resistance(""), .Level(""));
reporter_r mKate2_rev(.Name("mKate2_rev"), .Sequence("ttatcaacgatgtcctaatttcgacggaaggtcacaataacgggctacggctacttcatgttgttcaacgtaggtttctttatcagcttctttaatacgttctaagcgacgatcaacatagtatactccaggcattttaaggtttttagcgggttttttggaacgataggttgttttcaggttgcagattaaatgaccgcctccaactaatttcagtgccatgtctgcgcgtccttctaagccaccgtccgcaggatataaggtttctgttgatgcttcccaaccaagagtttttttttgcattacgggtccgttactcgggaaatttacgccacggattttaacattgtaaatcagacagccatcttgtaaactcgtatcttgagttgctgtaagtacaccgccatcttcataagttgttacacgttcccaggtaaagccttcaggaaaggactgtttaaaaaagtcaggaatgccttgggtgtgattgataaaagttttagacccgtacataaagctcgttgcgagaatgtcaaacgcaaagggcaggggtccaccttcaactgctttgatgcgcattgtttgtgtgccttcatatggtttaccttcaccttcggatgtgcatttgaaatgatgattgttgacagtaccttccatatataatttcatgtgcatattttctttaattaattctga"), .Left_Overhang(""), .Right_Overhang(""), .Type("reporter_r"), .Resistance(""), .Level(""));
invertase_site_r attP_TP901_rev(.Name("attP_TP901_rev"), .Sequence("cgtttttttcgtttttcgtaaatggaactaactctacaattaaccacaccgta"), .Left_Overhang(""), .Right_Overhang(""), .Type("invertase_site_r"), .Resistance(""), .Level(""));
gene i0500(.Name("i0500"), .Sequence("ttatgacaacttgacggctacatcattcactttttcttcacaaccggcacggaactcgctcgggctggccccggtgcattttttaaatacccgcgagaaatagagttgatcgtcaaaaccaacattgcgaccgacggtggcgataggcatccgggtggtgctcaaaagcagcttcgcctggctgatacgttggtcctcgcgccagcttaagacgctaatccctaactgctggcggaaaagatgtgacagacgcgacggcgacaagcaaacatgctgtgcgacgctggcgatatcaaaattgctgtctgccaggtgatcgctgatgtactgacaagcctcgcgtacccgattatccatcggtggatggagcgactcgttaatcgcttccatgcgccgcagtaacaattgctcaagcagatttatcgccagcagctccgaatagcgcccttccccttgcccggcgttaatgatttgcccaaacaggtcgctgaaatgcggctggtgcgcttcatccgggcgaaagaaccccgtattggcaaatattgacggccagttaagccattcatgccagtaggcgcgcggacgaaagtaaacccactggtgataccattcgcgagcctccggatgacgaccgtagtgatgaatctctcctggcgggaacagcaaaatatcacccggtcggcaaacaaattctcgtccctgatttttcaccaccccctgaccgcgaatggtgagattgagaatataacctttcattcccagcggtcggtcgataaaaaaatcgagataaccgttggcctcaatcggcgttaaacccgccaccagatgggcattaaacgagtatcccggcagcaggggatcattttgcgcttcagccatacttttcatactcccgccattcagagaagaaaccaattgtccatattgcatcagacattgccgtcactgcgtcttttactggctcttctcgctaaccaaaccggtaaccccgcttattaaaagcattctgtaacaaagcgggaccaaagccatgacaaaaacgcgtaacaaaagtgtctataatcacggcagaaaagtccacattgattatttgcacggcgtcacactttgctatgccatagcatttttatccataagattagcggatcctacctgacgctttttatcgcaactctctactgtttctccatacccgtttttttgggctagc"), .Left_Overhang(""), .Right_Overhang(""), .Type("gene"), .Resistance(""), .Level(""));