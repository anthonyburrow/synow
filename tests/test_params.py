from synow import Synow


def test_constructor():
    global_params = {
        'vphot': 1000.,
        'vmax': 4000.,
        'TPlanck': 5000.,
        'taumin': 0.01,
        'grid': 32,
        'stspec': 5100., 
        'delta_v': 300.,
    }
    synow = Synow(global_params)

    assert synow.TPlanck == global_params['TPlanck']
