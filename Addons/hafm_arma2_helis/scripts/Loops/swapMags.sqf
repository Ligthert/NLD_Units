_helo=_this;
_swapArray=[["Playermag","AIMag"]];

while{alive _helo) do {

	_gunner=gunner _this;
	_gunnerIsPlayer = isplayer _gunner;
	_magazines = magazinesAmmo _helo;
	{
		_mag=_x select 0;
		_count=_x select 1;
		{
			_swap=_x;
			_swapOut=_x select 1;
			_swapIn=_x select 0;
			if(_gunnerIsPlayer) then {
				_swapOut=_x select 0;
				_swapIn=_x select 1;
			};
			if(_mag==_swapOut) then {
				_helo removeMagazineTurret [_swapOut,[0]];
				_helo addmagazine [_swapIn,[0]];
			};
		}foreach _swapArray;

	}foreach _magazines;
	sleep 1;
};