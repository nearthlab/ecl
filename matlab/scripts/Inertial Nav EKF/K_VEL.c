t2 = q0*q3*2.0;
t3 = q1*q2*2.0;
t4 = t2+t3;
t5 = q0*q0;
t6 = q1*q1;
t7 = q2*q2;
t8 = q3*q3;
t9 = t5+t6-t7-t8;
t10 = q0*q2*2.0;
t25 = q1*q3*2.0;
t11 = t10-t25;
t12 = q3*ve*2.0;
t13 = q0*vn*2.0;
t26 = q2*vd*2.0;
t14 = t12+t13-t26;
t15 = q3*vd*2.0;
t16 = q2*ve*2.0;
t17 = q1*vn*2.0;
t18 = t15+t16+t17;
t19 = q0*vd*2.0;
t20 = q2*vn*2.0;
t27 = q1*ve*2.0;
t21 = t19+t20-t27;
t22 = q1*vd*2.0;
t23 = q0*ve*2.0;
t28 = q3*vn*2.0;
t24 = t22+t23-t28;
t29 = P[0][0]*t14;
t30 = P[0][3]*t14;
t31 = t2-t3;
t32 = t5-t6+t7-t8;
t33 = q0*q1*2.0;
t34 = q2*q3*2.0;
t35 = t33+t34;
t36 = P[0][0]*t24;
t37 = P[0][3]*t24;
t38 = P[0][1]*t24;
t39 = P[0][2]*t14;
t40 = t10+t25;
t41 = t5-t6-t7+t8;
t42 = t33-t34;
t43 = P[0][0]*t21;
t44 = P[0][1]*t21;
t45 = P[1][2]*t21;
t46 = P[1][1]*t18;
t47 = P[4][5]*t9;
t48 = P[5][5]*t4;
t49 = P[0][5]*t14;
t50 = P[1][5]*t18;
t51 = P[3][5]*t24;
t181 = P[6][5]*t11;
t182 = P[2][5]*t21;
t52 = t47+t48+t49+t50+t51-t181-t182;
t53 = t4*t52;
t54 = P[4][6]*t9;
t55 = P[5][6]*t4;
t56 = P[0][6]*t14;
t57 = P[1][6]*t18;
t58 = P[3][6]*t24;
t183 = P[6][6]*t11;
t184 = P[2][6]*t21;
t59 = t54+t55+t56+t57+t58-t183-t184;
t60 = P[4][0]*t9;
t61 = P[5][0]*t4;
t62 = P[1][0]*t18;
t63 = P[3][0]*t24;
t186 = P[6][0]*t11;
t187 = P[2][0]*t21;
t64 = t29+t60+t61+t62+t63-t186-t187;
t65 = t14*t64;
t66 = P[4][1]*t9;
t67 = P[5][1]*t4;
t68 = P[0][1]*t14;
t69 = P[3][1]*t24;
t188 = P[6][1]*t11;
t189 = P[2][1]*t21;
t70 = t46+t66+t67+t68+t69-t188-t189;
t71 = t18*t70;
t72 = P[4][2]*t9;
t73 = P[5][2]*t4;
t74 = P[1][2]*t18;
t75 = P[3][2]*t24;
t180 = P[2][2]*t21;
t190 = P[6][2]*t11;
t76 = t39+t72+t73+t74+t75-t180-t190;
t77 = P[4][3]*t9;
t78 = P[5][3]*t4;
t79 = P[1][3]*t18;
t80 = P[3][3]*t24;
t192 = P[6][3]*t11;
t193 = P[2][3]*t21;
t81 = t30+t77+t78+t79+t80-t192-t193;
t82 = t24*t81;
t83 = P[4][4]*t9;
t84 = P[5][4]*t4;
t85 = P[0][4]*t14;
t86 = P[1][4]*t18;
t87 = P[3][4]*t24;
t194 = P[6][4]*t11;
t195 = P[2][4]*t21;
t88 = t83+t84+t85+t86+t87-t194-t195;
t89 = t9*t88;
t185 = t11*t59;
t191 = t21*t76;
t90 = R_VEL+t53+t65+t71+t82+t89-t185-t191;
t91 = 1.0/t90;
t92 = P[1][1]*t21;
t93 = P[5][4]*t32;
t94 = P[6][4]*t35;
t95 = P[0][4]*t24;
t96 = P[1][4]*t21;
t97 = P[2][4]*t18;
t196 = P[4][4]*t31;
t197 = P[3][4]*t14;
t98 = t93+t94+t95+t96+t97-t196-t197;
t99 = P[5][6]*t32;
t100 = P[6][6]*t35;
t101 = P[0][6]*t24;
t102 = P[1][6]*t21;
t103 = P[2][6]*t18;
t199 = P[4][6]*t31;
t200 = P[3][6]*t14;
t104 = t99+t100+t101+t102+t103-t199-t200;
t105 = t35*t104;
t106 = P[5][0]*t32;
t107 = P[6][0]*t35;
t108 = P[1][0]*t21;
t109 = P[2][0]*t18;
t201 = P[4][0]*t31;
t202 = P[3][0]*t14;
t110 = t36+t106+t107+t108+t109-t201-t202;
t111 = t24*t110;
t112 = P[5][1]*t32;
t113 = P[6][1]*t35;
t114 = P[2][1]*t18;
t203 = P[4][1]*t31;
t204 = P[3][1]*t14;
t115 = t38+t92+t112+t113+t114-t203-t204;
t116 = t21*t115;
t117 = P[5][2]*t32;
t118 = P[6][2]*t35;
t119 = P[0][2]*t24;
t120 = P[2][2]*t18;
t205 = P[4][2]*t31;
t206 = P[3][2]*t14;
t121 = t45+t117+t118+t119+t120-t205-t206;
t122 = t18*t121;
t123 = P[5][3]*t32;
t124 = P[6][3]*t35;
t125 = P[1][3]*t21;
t126 = P[2][3]*t18;
t207 = P[4][3]*t31;
t208 = P[3][3]*t14;
t127 = t37+t123+t124+t125+t126-t207-t208;
t128 = P[5][5]*t32;
t129 = P[6][5]*t35;
t130 = P[0][5]*t24;
t131 = P[1][5]*t21;
t132 = P[2][5]*t18;
t210 = P[4][5]*t31;
t211 = P[3][5]*t14;
t133 = t128+t129+t130+t131+t132-t210-t211;
t134 = t32*t133;
t198 = t31*t98;
t209 = t14*t127;
t135 = R_VEL+t105+t111+t116+t122+t134-t198-t209;
t136 = 1.0/t135;
t137 = P[6][4]*t41;
t138 = P[4][4]*t40;
t139 = P[0][4]*t21;
t140 = P[2][4]*t14;
t141 = P[3][4]*t18;
t212 = P[5][4]*t42;
t213 = P[1][4]*t24;
t142 = t137+t138+t139+t140+t141-t212-t213;
t143 = t40*t142;
t144 = P[6][5]*t41;
t145 = P[4][5]*t40;
t146 = P[0][5]*t21;
t147 = P[2][5]*t14;
t148 = P[3][5]*t18;
t214 = P[5][5]*t42;
t215 = P[1][5]*t24;
t149 = t144+t145+t146+t147+t148-t214-t215;
t150 = P[6][0]*t41;
t151 = P[4][0]*t40;
t152 = P[1][0]*t24;
t153 = P[2][0]*t14;
t154 = P[3][0]*t18;
t155 = P[6][1]*t41;
t156 = P[4][1]*t40;
t157 = P[2][1]*t14;
t158 = P[3][1]*t18;
t218 = P[5][1]*t42;
t219 = P[1][1]*t24;
t159 = t44+t155+t156+t157+t158-t218-t219;
t160 = P[6][2]*t41;
t161 = P[4][2]*t40;
t162 = P[0][2]*t21;
t163 = P[2][2]*t14;
t164 = P[3][2]*t18;
t220 = P[5][2]*t42;
t221 = P[1][2]*t24;
t165 = t160+t161+t162+t163+t164-t220-t221;
t166 = t14*t165;
t167 = P[6][3]*t41;
t168 = P[4][3]*t40;
t169 = P[0][3]*t21;
t170 = P[1][3]*t24;
t171 = P[2][3]*t14;
t172 = P[3][3]*t18;
t173 = P[6][6]*t41;
t174 = P[4][6]*t40;
t175 = P[0][6]*t21;
t176 = P[2][6]*t14;
t177 = P[3][6]*t18;
t224 = P[5][6]*t42;
t225 = P[1][6]*t24;
t178 = t173+t174+t175+t176+t177-t224-t225;
t179 = t41*t178;
t229 = P[5][0]*t42;
t216 = t43+t150+t151-t152+t153+t154-t229;
t217 = t21*t216;
t231 = P[5][3]*t42;
t222 = t167+t168+t169-t170+t171+t172-t231;
t223 = t18*t222;
t228 = t42*t149;
t230 = t24*t159;
t226 = R_VEL+t143+t166+t179+t217+t223-t228-t230;
t227 = 1.0/t226;
A0[0][0] = t91*(t29+t37+P[0][5]*t4+P[0][4]*t9-P[0][6]*t11+P[0][1]*t18-P[0][2]*t21);
A0[0][1] = t136*(-t30+t36+t44+P[0][2]*t18-P[0][4]*t31+P[0][5]*t32+P[0][6]*t35);
A0[0][2] = (-t38+t39+t43+P[0][3]*t18+P[0][4]*t40-P[0][5]*t42+P[0][6]*t41)/(R_VEL+t143+t166+t179-t24*t159-t42*t149+t21*(t43+t150+t151+t153+t154-P[1][0]*t24-P[5][0]*t42)+t18*(t167+t168+t169+t171+t172-P[1][3]*t24-P[5][3]*t42));
A0[1][0] = t91*(-t45+t46+t170+P[1][5]*t4+P[1][4]*t9+P[1][0]*t14-P[1][6]*t11);
A0[1][1] = t136*(t74+t92+t152-P[1][3]*t14-P[1][4]*t31+P[1][5]*t32+P[1][6]*t35);
A0[1][2] = t227*(t79+t108+P[1][2]*t14-P[1][1]*t24+P[1][4]*t40-P[1][5]*t42+P[1][6]*t41);
A0[2][0] = t91*(t114+t153-t180+P[2][5]*t4+P[2][4]*t9-P[2][6]*t11+P[2][3]*t24);
A0[2][1] = t136*(t120-t171+t189+P[2][0]*t24-P[2][4]*t31+P[2][5]*t32+P[2][6]*t35);
A0[2][2] = t227*(t126+t163+t187-P[2][1]*t24+P[2][4]*t40-P[2][5]*t42+P[2][6]*t41);
A0[3][0] = t91*(t80+t158+t202+P[3][5]*t4+P[3][4]*t9-P[3][6]*t11-P[3][2]*t21);
A0[3][1] = t136*(t63+t164-t208+P[3][1]*t21-P[3][4]*t31+P[3][5]*t32+P[3][6]*t35);
A0[3][2] = t227*(-t69+t172+t206+P[3][0]*t21+P[3][4]*t40-P[3][5]*t42+P[3][6]*t41);
A0[4][0] = t91*(t83+P[4][5]*t4+P[4][0]*t14-P[4][6]*t11+P[4][1]*t18-P[4][2]*t21+P[4][3]*t24);
A0[4][1] = t136*(-t196-P[4][3]*t14+P[4][2]*t18+P[4][1]*t21+P[4][0]*t24+P[4][5]*t32+P[4][6]*t35);
A0[4][2] = t227*(t138+P[4][2]*t14+P[4][0]*t21+P[4][3]*t18-P[4][1]*t24-P[4][5]*t42+P[4][6]*t41);
A0[5][0] = t91*(t48+P[5][4]*t9+P[5][0]*t14-P[5][6]*t11+P[5][1]*t18-P[5][2]*t21+P[5][3]*t24);
A0[5][1] = t136*(t128-P[5][3]*t14+P[5][2]*t18+P[5][1]*t21+P[5][0]*t24-P[5][4]*t31+P[5][6]*t35);
A0[5][2] = t227*(-t214+P[5][2]*t14+P[5][0]*t21+P[5][3]*t18-P[5][1]*t24+P[5][4]*t40+P[5][6]*t41);
A0[6][0] = t91*(-t183+P[6][5]*t4+P[6][4]*t9+P[6][0]*t14+P[6][1]*t18-P[6][2]*t21+P[6][3]*t24);
A0[6][1] = t136*(t100-P[6][3]*t14+P[6][2]*t18+P[6][1]*t21+P[6][0]*t24-P[6][4]*t31+P[6][5]*t32);
A0[6][2] = t227*(t173+P[6][2]*t14+P[6][0]*t21+P[6][3]*t18-P[6][1]*t24+P[6][4]*t40-P[6][5]*t42);
A0[7][0] = t91*(P[7][5]*t4+P[7][4]*t9+P[7][0]*t14-P[7][6]*t11+P[7][1]*t18-P[7][2]*t21+P[7][3]*t24);
A0[7][1] = t136*(-P[7][3]*t14+P[7][2]*t18+P[7][1]*t21+P[7][0]*t24-P[7][4]*t31+P[7][5]*t32+P[7][6]*t35);
A0[7][2] = t227*(P[7][2]*t14+P[7][0]*t21+P[7][3]*t18-P[7][1]*t24+P[7][4]*t40-P[7][5]*t42+P[7][6]*t41);
A0[8][0] = t91*(P[8][5]*t4+P[8][4]*t9+P[8][0]*t14-P[8][6]*t11+P[8][1]*t18-P[8][2]*t21+P[8][3]*t24);
A0[8][1] = t136*(-P[8][3]*t14+P[8][2]*t18+P[8][1]*t21+P[8][0]*t24-P[8][4]*t31+P[8][5]*t32+P[8][6]*t35);
A0[8][2] = t227*(P[8][2]*t14+P[8][0]*t21+P[8][3]*t18-P[8][1]*t24+P[8][4]*t40-P[8][5]*t42+P[8][6]*t41);
A0[9][0] = t91*(P[9][5]*t4+P[9][4]*t9+P[9][0]*t14-P[9][6]*t11+P[9][1]*t18-P[9][2]*t21+P[9][3]*t24);
A0[9][1] = t136*(-P[9][3]*t14+P[9][2]*t18+P[9][1]*t21+P[9][0]*t24-P[9][4]*t31+P[9][5]*t32+P[9][6]*t35);
A0[9][2] = t227*(P[9][2]*t14+P[9][0]*t21+P[9][3]*t18-P[9][1]*t24+P[9][4]*t40-P[9][5]*t42+P[9][6]*t41);
A0[10][0] = t91*(P[10][5]*t4+P[10][4]*t9+P[10][0]*t14-P[10][6]*t11+P[10][1]*t18-P[10][2]*t21+P[10][3]*t24);
A0[10][1] = t136*(-P[10][3]*t14+P[10][2]*t18+P[10][1]*t21+P[10][0]*t24-P[10][4]*t31+P[10][5]*t32+P[10][6]*t35);
A0[10][2] = t227*(P[10][2]*t14+P[10][0]*t21+P[10][3]*t18-P[10][1]*t24+P[10][4]*t40-P[10][5]*t42+P[10][6]*t41);
A0[11][0] = t91*(P[11][5]*t4+P[11][4]*t9+P[11][0]*t14-P[11][6]*t11+P[11][1]*t18-P[11][2]*t21+P[11][3]*t24);
A0[11][1] = t136*(-P[11][3]*t14+P[11][2]*t18+P[11][1]*t21+P[11][0]*t24-P[11][4]*t31+P[11][5]*t32+P[11][6]*t35);
A0[11][2] = t227*(P[11][2]*t14+P[11][0]*t21+P[11][3]*t18-P[11][1]*t24+P[11][4]*t40-P[11][5]*t42+P[11][6]*t41);
A0[12][0] = t91*(P[12][5]*t4+P[12][4]*t9+P[12][0]*t14-P[12][6]*t11+P[12][1]*t18-P[12][2]*t21+P[12][3]*t24);
A0[12][1] = t136*(-P[12][3]*t14+P[12][2]*t18+P[12][1]*t21+P[12][0]*t24-P[12][4]*t31+P[12][5]*t32+P[12][6]*t35);
A0[12][2] = t227*(P[12][2]*t14+P[12][0]*t21+P[12][3]*t18-P[12][1]*t24+P[12][4]*t40-P[12][5]*t42+P[12][6]*t41);
A0[13][0] = t91*(P[13][5]*t4+P[13][4]*t9+P[13][0]*t14-P[13][6]*t11+P[13][1]*t18-P[13][2]*t21+P[13][3]*t24);
A0[13][1] = t136*(-P[13][3]*t14+P[13][2]*t18+P[13][1]*t21+P[13][0]*t24-P[13][4]*t31+P[13][5]*t32+P[13][6]*t35);
A0[13][2] = t227*(P[13][2]*t14+P[13][0]*t21+P[13][3]*t18-P[13][1]*t24+P[13][4]*t40-P[13][5]*t42+P[13][6]*t41);
A0[14][0] = t91*(P[14][5]*t4+P[14][4]*t9+P[14][0]*t14-P[14][6]*t11+P[14][1]*t18-P[14][2]*t21+P[14][3]*t24);
A0[14][1] = t136*(-P[14][3]*t14+P[14][2]*t18+P[14][1]*t21+P[14][0]*t24-P[14][4]*t31+P[14][5]*t32+P[14][6]*t35);
A0[14][2] = t227*(P[14][2]*t14+P[14][0]*t21+P[14][3]*t18-P[14][1]*t24+P[14][4]*t40-P[14][5]*t42+P[14][6]*t41);
A0[15][0] = t91*(P[15][5]*t4+P[15][4]*t9+P[15][0]*t14-P[15][6]*t11+P[15][1]*t18-P[15][2]*t21+P[15][3]*t24);
A0[15][1] = t136*(-P[15][3]*t14+P[15][2]*t18+P[15][1]*t21+P[15][0]*t24-P[15][4]*t31+P[15][5]*t32+P[15][6]*t35);
A0[15][2] = t227*(P[15][2]*t14+P[15][0]*t21+P[15][3]*t18-P[15][1]*t24+P[15][4]*t40-P[15][5]*t42+P[15][6]*t41);
A0[16][0] = t91*(P[16][5]*t4+P[16][4]*t9+P[16][0]*t14-P[16][6]*t11+P[16][1]*t18-P[16][2]*t21+P[16][3]*t24);
A0[16][1] = t136*(-P[16][3]*t14+P[16][2]*t18+P[16][1]*t21+P[16][0]*t24-P[16][4]*t31+P[16][5]*t32+P[16][6]*t35);
A0[16][2] = t227*(P[16][2]*t14+P[16][0]*t21+P[16][3]*t18-P[16][1]*t24+P[16][4]*t40-P[16][5]*t42+P[16][6]*t41);
A0[17][0] = t91*(P[17][5]*t4+P[17][4]*t9+P[17][0]*t14-P[17][6]*t11+P[17][1]*t18-P[17][2]*t21+P[17][3]*t24);
A0[17][1] = t136*(-P[17][3]*t14+P[17][2]*t18+P[17][1]*t21+P[17][0]*t24-P[17][4]*t31+P[17][5]*t32+P[17][6]*t35);
A0[17][2] = t227*(P[17][2]*t14+P[17][0]*t21+P[17][3]*t18-P[17][1]*t24+P[17][4]*t40-P[17][5]*t42+P[17][6]*t41);
A0[18][0] = t91*(P[18][5]*t4+P[18][4]*t9+P[18][0]*t14-P[18][6]*t11+P[18][1]*t18-P[18][2]*t21+P[18][3]*t24);
A0[18][1] = t136*(-P[18][3]*t14+P[18][2]*t18+P[18][1]*t21+P[18][0]*t24-P[18][4]*t31+P[18][5]*t32+P[18][6]*t35);
A0[18][2] = t227*(P[18][2]*t14+P[18][0]*t21+P[18][3]*t18-P[18][1]*t24+P[18][4]*t40-P[18][5]*t42+P[18][6]*t41);
A0[19][0] = t91*(P[19][5]*t4+P[19][4]*t9+P[19][0]*t14-P[19][6]*t11+P[19][1]*t18-P[19][2]*t21+P[19][3]*t24);
A0[19][1] = t136*(-P[19][3]*t14+P[19][2]*t18+P[19][1]*t21+P[19][0]*t24-P[19][4]*t31+P[19][5]*t32+P[19][6]*t35);
A0[19][2] = t227*(P[19][2]*t14+P[19][0]*t21+P[19][3]*t18-P[19][1]*t24+P[19][4]*t40-P[19][5]*t42+P[19][6]*t41);
A0[20][0] = t91*(P[20][5]*t4+P[20][4]*t9+P[20][0]*t14-P[20][6]*t11+P[20][1]*t18-P[20][2]*t21+P[20][3]*t24);
A0[20][1] = t136*(-P[20][3]*t14+P[20][2]*t18+P[20][1]*t21+P[20][0]*t24-P[20][4]*t31+P[20][5]*t32+P[20][6]*t35);
A0[20][2] = t227*(P[20][2]*t14+P[20][0]*t21+P[20][3]*t18-P[20][1]*t24+P[20][4]*t40-P[20][5]*t42+P[20][6]*t41);
A0[21][0] = t91*(P[21][5]*t4+P[21][4]*t9+P[21][0]*t14-P[21][6]*t11+P[21][1]*t18-P[21][2]*t21+P[21][3]*t24);
A0[21][1] = t136*(-P[21][3]*t14+P[21][2]*t18+P[21][1]*t21+P[21][0]*t24-P[21][4]*t31+P[21][5]*t32+P[21][6]*t35);
A0[21][2] = t227*(P[21][2]*t14+P[21][0]*t21+P[21][3]*t18-P[21][1]*t24+P[21][4]*t40-P[21][5]*t42+P[21][6]*t41);
A0[22][0] = t91*(P[22][5]*t4+P[22][4]*t9+P[22][0]*t14-P[22][6]*t11+P[22][1]*t18-P[22][2]*t21+P[22][3]*t24);
A0[22][1] = t136*(-P[22][3]*t14+P[22][2]*t18+P[22][1]*t21+P[22][0]*t24-P[22][4]*t31+P[22][5]*t32+P[22][6]*t35);
A0[22][2] = t227*(P[22][2]*t14+P[22][0]*t21+P[22][3]*t18-P[22][1]*t24+P[22][4]*t40-P[22][5]*t42+P[22][6]*t41);
A0[23][0] = t91*(P[23][5]*t4+P[23][4]*t9+P[23][0]*t14-P[23][6]*t11+P[23][1]*t18-P[23][2]*t21+P[23][3]*t24);
A0[23][1] = t136*(-P[23][3]*t14+P[23][2]*t18+P[23][1]*t21+P[23][0]*t24-P[23][4]*t31+P[23][5]*t32+P[23][6]*t35);
A0[23][2] = t227*(P[23][2]*t14+P[23][0]*t21+P[23][3]*t18-P[23][1]*t24+P[23][4]*t40-P[23][5]*t42+P[23][6]*t41);
A0[24][0] = t91*(P[24][5]*t4+P[24][4]*t9+P[24][0]*t14-P[24][6]*t11+P[24][1]*t18-P[24][2]*t21+P[24][3]*t24);
A0[24][1] = t136*(-P[24][3]*t14+P[24][2]*t18+P[24][1]*t21+P[24][0]*t24-P[24][4]*t31+P[24][5]*t32+P[24][6]*t35);
A0[24][2] = t227*(P[24][2]*t14+P[24][0]*t21+P[24][3]*t18-P[24][1]*t24+P[24][4]*t40-P[24][5]*t42+P[24][6]*t41);
A0[25][0] = t91*(P[25][5]*t4+P[25][4]*t9+P[25][0]*t14-P[25][6]*t11+P[25][1]*t18-P[25][2]*t21+P[25][3]*t24);
A0[25][1] = t136*(-P[25][3]*t14+P[25][2]*t18+P[25][1]*t21+P[25][0]*t24-P[25][4]*t31+P[25][5]*t32+P[25][6]*t35);
A0[25][2] = t227*(P[25][2]*t14+P[25][0]*t21+P[25][3]*t18-P[25][1]*t24+P[25][4]*t40-P[25][5]*t42+P[25][6]*t41);
A0[26][0] = t91*(P[26][5]*t4+P[26][4]*t9+P[26][0]*t14-P[26][6]*t11+P[26][1]*t18-P[26][2]*t21+P[26][3]*t24);
A0[26][1] = t136*(-P[26][3]*t14+P[26][2]*t18+P[26][1]*t21+P[26][0]*t24-P[26][4]*t31+P[26][5]*t32+P[26][6]*t35);
A0[26][2] = t227*(P[26][2]*t14+P[26][0]*t21+P[26][3]*t18-P[26][1]*t24+P[26][4]*t40-P[26][5]*t42+P[26][6]*t41);