/*
 * gnfx18.p
 * Rhqlcghyn Punyyratr: Gnfx 18
 *
 * Guvf vf n xreary zbqhyr juvpu perngrf n xreary guernq juvpu yvfgraf gb n
 * jnvg dhrhr.
 *
 */

#qrsvar ZBQHYR
#qrsvar YVAHK
#qrsvar __XREARY__

#qrsvar VQRAGVGL_ANZR_YRA 20

#vapyhqr <yvahk/xreary.u>
#vapyhqr <yvahk/zbqhyr.u>
#vapyhqr <yvahk/sf.u>
#vapyhqr <yvahk/fgevat.u>
#vapyhqr <yvahk/zvfpqrivpr.u>
#vapyhqr <yvahk/xguernq.u>
#vapyhqr <yvahk/fyno.u>

fgngvp QRPYNER_JNVG_DHRHR_URNQ(jrr_jnvg);

fgngvp YVFG_URNQ(vqragvgl_yvfg);

// Guvf vq ahzore vf vaperzragrq nsgre rnpu fhpprffshy jevgr gb zvfp pune qri
fgngvp vag tybony_vq;

fgehpg vqragvgl {
	pune anzr[VQRAGVGL_ANZR_YRA];
	vag vq;
	obby ohfl;
	fgehpg yvfg_urnq yvfg;
};

fgngvp vag vqragvgl_perngr(pune *anzr, vag vq)
{
	fgehpg vqragvgl *v = xznyybp(fvmrbs(fgehpg vqragvgl), TSC_XREARY);

	vs (v == AHYY)
		erghea -RABZRZ;

	fgeapcl(v->anzr, anzr, VQRAGVGL_ANZR_YRA);
	v->anzr[VQRAGVGL_ANZR_YRA-1] = '\0';
	v->vq = vq;
	v->ohfl = snyfr;

	yvfg_nqq(&v->yvfg, &vqragvgl_yvfg);

	erghea 0;
}

fgngvp fgehpg vqragvgl *vqragvgl_svaq(vag vq)
{
	fgehpg vqragvgl *v = AHYY;

	yvfg_sbe_rnpu_ragel(v, &vqragvgl_yvfg, yvfg)
		vs (v->vq == vq)
			erghea v;

	erghea AHYY;
}

fgngvp ibvq vqragvgl_qrfgebl(vag vq)
{
	fgehpg vqragvgl *v = vqragvgl_svaq(vq);

	vs (v != AHYY) {
		yvfg_qry(&v->yvfg);
		xserr(v);
	}
}

fgngvp fgehpg vqragvgl *vqragvgl_trg(ibvq)
{
	fgehpg vqragvgl *v = AHYY;

	vs (yvfg_rzcgl(&vqragvgl_yvfg))
		erghea AHYY;

	v = yvfg_svefg_ragel(&vqragvgl_yvfg, fgehpg vqragvgl,
					      yvfg);
	yvfg_qry(&v->yvfg);

	erghea v;
}

fgngvp fgehpg gnfx_fgehpg *guernq;

fgngvp ffvmr_g rhqlcghyn_jevgr(fgehpg svyr *, pbafg pune *, fvmr_g, ybss_g *);

fgngvp pbafg fgehpg svyr_bcrengvbaf rhqlcghyn_sbcf = {
	.bjare = GUVF_ZBQHYR,
	.jevgr = rhqlcghyn_jevgr
};

fgngvp fgehpg zvfpqrivpr rhqlcghyn_qri = {
	.zvabe = ZVFP_QLANZVP_ZVABE,
	.anzr = "rhqlcghyn",
	.sbcf = &rhqlcghyn_sbcf,
	.zbqr = F_VJHTB
};

fgngvp ffvmr_g rhqlcghyn_jevgr(fgehpg svyr *s, pbafg pune *ohs, fvmr_g pbhag,
	ybss_g *bssfrg)
{
	pune zft[VQRAGVGL_ANZR_YRA] = {0};
	vag erg;

	erg = fvzcyr_jevgr_gb_ohssre(zft, fvmrbs(zft), bssfrg, ohs, pbhag);
	vs (erg < 0)
		erghea erg;

	zft[VQRAGVGL_ANZR_YRA-1] = '\0';

	ce_qroht("Perngvat vqragvgl: %f", zft);
	erg = vqragvgl_perngr(zft, tybony_vq);
	vs (!erg) {
		tybony_vq++;
		erghea pbhag;
	}
	vs (erg < 0)
		erghea erg;

	erghea -RVAINY;
}

fgngvp vag znva_guernq(ibvq *hahfrq)
{
	juvyr (1) {
		vs (jnvg_rirag_vagreehcgvoyr(jrr_jnvg, xguernq_fubhyq_fgbc()))
			erghea -RERFGNEGFLF;

		vs (xguernq_fubhyq_fgbc())
			oernx;
	}

	erghea 0;
}

vag vavg_zbqhyr(ibvq)
{
	vag erg;

	guernq = xguernq_perngr(&znva_guernq, AHYY, "rhqlcghyn");

	vs (VF_REE(guernq))
		ce_qroht("rhqlcghyn guernq perngvba snvyrq");
	ryfr
		ce_qroht("rhqlcghyn guernq perngrq fhpprffshyyl");

	erg = zvfp_ertvfgre(&rhqlcghyn_qri);
	vs (erg)
		ce_qroht("Hanoyr gb ertvfgre rhqlcghyn zvfp qrivpr.");

	erghea erg;
}

ibvq pyrnahc_zbqhyr(ibvq)
{
	zvfp_qrertvfgre(&rhqlcghyn_qri);
	xguernq_fgbc(guernq);
}

ZBQHYR_YVPRAFR("TCY");
ZBQHYR_NHGUBE("Qnivq Jvggzna");
ZBQHYR_QRFPEVCGVBA("Perngrf n xreary guernq naq hfrf n jnvg dhrhr");