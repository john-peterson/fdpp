	case 0:
		_DISPATCH(1, _ARG_R(UBYTE), _RET, DosUpChar, _ARG(0, UBYTE, _SP));
		break;
	case 1:
		_DISPATCH(2, _ARG_R(UWORD), _RET, syscall_MUX14, _ARG_PTR_FAR(0, iregs, _SP));
		break;
	case 2:
		_DISPATCH(2, _ARG_R(WORD), _RET, clk_driver, _ARG_PTR_FAR(0, request, _SP));
		break;
	case 3:
		_DISPATCH(2, _ARG_R(WORD), _RET, blk_driver, _ARG_PTR_FAR(0, request, _SP));
		break;
	case 4:
		_DISPATCH_v(FreeDOSmain);
		break;
	case 5:
		_DISPATCH_v(int21_syscall, _ARG_PTR_FAR(0, iregs, _SP));
		break;
	case 6:
		_DISPATCH_v(int21_service, _ARG_PTR_FAR(0, iregs, _SP));
		break;
	case 7:
		_DISPATCH_v(int2526_handler, _ARG(0, WORD, _SP), _ARG_PTR_FAR(2, struct int25regs, _SP));
		break;
	case 8:
		_DISPATCH_v(P_0, _ARG_PTR_FAR(0, const struct config, _SP));
		break;
	case 9:
		_DISPATCH_v(P_0_exit);
		break;
	case 10:
		_DISPATCH_v(P_0_bad);
		break;
	case 11:
		_DISPATCH_v(int2F_12_handler, _ARG_PTR_FAR(0, struct int2f12regs, _SP));
		break;
	case 12:
		_DISPATCH_v(int2F_08_handler, _ARG_PTR_FAR(0, iregs, _SP));
		break;
	case 13:
		_DISPATCH_v(int2F_10_handler, _ARG_PTR_FAR(0, iregs, _SP));
		break;
