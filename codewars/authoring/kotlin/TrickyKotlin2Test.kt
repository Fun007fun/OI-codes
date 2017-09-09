import org.junit.Test
import java.util.*
import kotlin.test.assertEquals

class KotlinTricks2 {
	private fun testUnlessHelper(boolean: Boolean) {
		var int = 1
		unless(boolean) { int = 2 }
		assertEquals(if (boolean) 1 else 2, int)
	}

	private fun testUntilHelper(boolean: Int) {
		var int = 1
		var cond = boolean
		until({ (cond--) == 0 }) { int++ }
		assertEquals(boolean + 1, int)
	}

	@Test
	fun testUnless() {
		val r = Random(System.currentTimeMillis())
		(0..100).forEach { testUnlessHelper(r.nextBoolean()) }
	}

	@Test
	fun testUntil() {
		val r = Random(System.currentTimeMillis())
		(0..100).forEach { testUntilHelper(Math.abs(r.nextInt())) }
	}

	@Test
	fun testForceRun() {
		val r = Random(System.currentTimeMillis())
		(0..100).forEach { forceRun { listOf(1)[r.nextInt()] } }
	}
}